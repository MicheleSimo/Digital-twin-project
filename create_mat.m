function mat  = create_mat(mat,side,rate_decr,num_gocce)
    %mat = zeros(100);
    for I = 1:num_gocce
        rand_1 = randi(side-1);
        rand_2 = randi(side-1);
    

        while mat(rand_1,rand_2) > 0.5 * 255
            rand_1 = randi(side-1);
            rand_2 = randi(side-1); 
        end
        for j = (rand_1 - 1):(rand_1 + 1)
            %disp(j)
            for k = (rand_2 - 1):(rand_2 + 1)
                if j < 1
                  continue
                elseif j > side
                  continue
                end
                if k < 1
                  continue
                elseif k > side
                  continue
                end
                mat(j,k) = 0.5 * 255;
                %disp(rand_1)
            end
        end
        mat(rand_1,rand_2) = 1 * 255;
    end
    
end