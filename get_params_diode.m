function [s1,s2,s3,s4,s5,s6] = get_params_diode(mat_t0,mat_t1,center_1,center_2,center_3,half_height)
    acc1 = 0;
    acc2 = 0;
    acc3 = 0;
    acc4 = 0;
    acc5 = 0;
    acc6 = 0;
    minVal0 = [88,9,7,6,6];
    maxVal0 = [90,187,176,136,133];
    minVal1 = [79,12,9,7,6];
    maxVal1 = [139,118,214,140,83];
    minVal2 = [97,10,8,6,6];
    maxVal2 = [100,155,200,152,128];
    minVal3 = [194,8,7,5,6];
    maxVal3 = [197,258,351,230,235];
    minVal4 = [203,11,8,6,6];
    maxVal4 = [213,244,271,223,214];
    minVal5 = [185,8,7,6,5];
    maxVal5 = [190,258,233,168,214];
    for i = 1:size(mat_t0,1)
        for i_2 = center_1-half_height:center_1+half_height
            if mat_t0(i,i_2) >= 127.500
                acc1 = acc1 + 1;
            end
        end
    end

    for j = 1:size(mat_t0,1)
        for j_2 = center_2-half_height:center_2+half_height
            if mat_t0(j,j_2) >= 127.500
                acc2 = acc2 + 1;
            end
        end
    end

    for k = 1:size(mat_t0,1)
        for k_2 = center_3-half_height:center_3+half_height
            if mat_t0(k,k_2) >= 127.500
                acc3 = acc3 + 1;
            end
        end
    end

    for i = 1:size(mat_t1,1)
        for i_2 = center_1-half_height:center_1+half_height
            if mat_t1(i,i_2) >= 127.500
                acc4 = acc4 + 1;
            end
        end
    end

    for j = 1:size(mat_t1,1)
        for j_2 = center_2-half_height:center_2+half_height
            if mat_t1(j,j_2) >= 127.500
                acc5 = acc5 + 1;
            end
        end
    end

    for k = 1:size(mat_t1,1)
        for k_2 = center_3-half_height:center_3+half_height
            if mat_t1(k,k_2) >= 127.500
                acc6 = acc6 + 1;
            end
        end
    end
    s1 = acc1;
    s2 = acc2;
    s3 = acc3;
    s4 = acc4;
    s5 = acc5;
    s6 = acc6;



end