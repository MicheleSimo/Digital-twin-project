# Real data concatenation and train-test splitting
import pandas as pd

names=["val0","val1","val2","val3","val4","val5","class","second"]
train_df = pd.DataFrame(columns=names)
test_df = pd.DataFrame(columns=names)
num_classes = 5
train_df_dict = {cl: [] for cl in range(num_classes)}
test_df_dict = {cl: [] for cl in range(num_classes)}
train_df_arr = []
test_df_arr = []

print("train")
for j in range(num_classes):
  # reading outputs from Simulink model
  df = pd.read_csv(f"BRain_dataset_{j}_2211171735_fixed.csv", index_col=0)
  df = df.reset_index(drop=True)
  # appending to list of class j of training dataframes dictionary
  df = df.drop(columns=["class","second"])
  print(df.shape)
  train_df_dict[j] = df

rows_per_block = 40

# CLASSES: Number of classes
# ROWS: Number of rows of dataframes
# PD: Number of columns of dataframes (number of photodiodes)
# df_arr: Array of dataframes of size CLASSES where each element is a dataframe of size (ROWS, PD) with the same class label
# df_arr => (CLASSES, ROWS, PD)
# rows_per_block: Integer indicating how many rows should be merged to generate a new row
# it returns a dataframe of shape (floor(CLASSES*ROWS/rows_per_block), (PD*rows_per_block)+1)
def get_reshaped_df(df_arr, rows_per_block):
  min_rows = 1000000000
  arr = {cl: [] for cl in range(len(df_arr))}

  for j in range(len(df_arr)):
    print(f"Class: {j}")
    for i in range(rows_per_block):
      #selecting indexes to filter rows by each rows_per_block (example: 0, 7, 14, 21, ...)
      ind_i = range(i,len(df_arr[j]),rows_per_block)
      df_i = df_arr[j].filter(items = ind_i, axis=0)
      print(df_i.shape)
      #getting the minimum number of rows to remove extra rows which cannot be concatenated
      min_rows = min(min_rows, df_i.shape[0])
      #resetting indexes
      df_i = df_i.reset_index(drop=True)
      #adding the dataframe to the list of the j class
      arr[j].append(df_i)
  print("cutting the extra rows...")
  for j in range(len(df_arr)):
    print(f"Class: {j}")
    for i in range(rows_per_block):
      #selecting indexes from 0 to min_rows
      ind_j = range(min_rows)
      #cutting out extra rows from i_th element of the j_th class
      arr[j][i] = arr[j][i].filter(items = ind_j, axis=0)
      print(arr[j][i].shape)
  print("concatenating dfs from same class...")

  final_df = None
  for j in range(len(df_arr)):
    print(f"Class: {j}")
    #concatenating horizontally all element from j_th class list to a single class dataframe
    df_j = pd.concat(arr[j], axis=1)
    df_j = df_j.reset_index(drop=True)
    #adding y column to the concatenated dataframe of class j
    df_j["y"] = j
    #concatenating vertically all dataframes
    if final_df is None:
      final_df = df_j
    else:
      final_df = pd.concat([final_df, df_j])
    print(df_j.shape)
  print("final dataframe")
  final_df = final_df.reset_index(drop=True)
  print(final_df.shape)
  print(final_df.head())
  return final_df

final_internal_df = get_reshaped_df(train_df_dict, rows_per_block)

from sklearn.model_selection import train_test_split
from sklearn.neural_network import MLPRegressor, MLPClassifier
from sklearn.svm import SVC
from sklearn.ensemble import RandomForestClassifier

y = final_internal_df["y"]
X = final_internal_df.drop(columns=["y"], axis=1)
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.25, random_state=42)
print(X_train.shape)
print(X_test.shape)
print(X_train.head())

#best_mlp = MLPClassifier(hidden_layer_sizes = (150, 175,50, 20),
                        #activation ="relu",
                       #solver="adam",
                       #learning_rate="adaptive",
                        #max_iter= 60, n_iter_no_change = 150,
                        #alpha=0.2,
                       # power_t=0.999)

#best_mlp.fit(X_train, y_train)
#print("Predictions for MLP:")
#print(best_mlp.predict(X_test))
#print("Real values:")
#print(y_test.values)
#print("Score (mean accuracy):")
#print(best_mlp.score(X_test, y_test))

#best_svc = SVC(kernel="linear", C=35, gamma="scale", random_state=42)

#best_svc.fit(X_train, y_train)
#print("Predictions for SVC:")
#print(best_svc.predict(X_test))
#print("Real values:")
#print(y_test.values)
#print("Score (mean accuracy) for SVC:")
#print(best_svc.score(X_test, y_test))

best_rf = RandomForestClassifier(max_depth=40, n_estimators=20, max_features=10, random_state=42)

best_rf.fit(X_train, y_train)
print("Predictions for RF:")
print(best_rf.predict(X_test))
print("Real values:")
print(y_test.values)
print("Score (mean accuracy) for RF:")
print(best_rf.score(X_test, y_test))

names=["val0","val1","val2","val3","val4","val5","class","second"]
train_df = pd.DataFrame(columns=names)
test_df = pd.DataFrame(columns=names)
num_classes = 5
test_df_dict = {cl: [] for cl in range(num_classes)}
test_df_arr = []

print("test")

# reading outputs from Simulink model
df = pd.read_csv(f"BRain_testset_4_to_0_8_fixed.csv", index_col=0)
df = df.reset_index(drop=True)
# appending to list of class j of training dataframes dictionary
for idx, row in df.iterrows():
  cl = round(row["class"])
  r = row.copy().to_frame().T
  r = r.drop(columns=["class","second"])
  #print(r)
  test_df_dict[cl].append(r)
#df = df.drop(columns=["class","second"])
print(df.shape)
#test_df_dict[j] = df
#print(test_df_dict[0])

print("test concat")
# concatenating vertically all dataframes from the same class
for j in range(num_classes):
  arr = test_df_dict[j]
  df_j = pd.concat(arr)
  df_j = df_j.reset_index(drop=True)
  # appending dataframe of class j to the list of dataframes
  test_df_dict[j] = df_j

rows_per_block = 40

final_external_df = get_reshaped_df(test_df_dict, rows_per_block)

y_out = final_external_df["y"]
X_out = final_external_df.drop(columns=["y"], axis=1)

#print("Predictions for MLP:")
#print(best_mlp.predict(X_out))
#print("Real values:")
#print(y_out.values)
#print("Score (mean accuracy):")
#print(best_mlp.score(X_out, y_out))

#print("Predictions for svc:")
#print(best_svc.predict(X_out))
#print("Real values:")
#print(y_out.values)
#print("Score (mean accuracy):")
#print(best_svc.score(X_out, y_out))

print("Predictions for rf:")
print(best_rf.predict(X_out))
print("Real values:")
print(y_out.values)
print("Score (mean accuracy):")
print(best_rf.score(X_out, y_out))

