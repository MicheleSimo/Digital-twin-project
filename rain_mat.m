function [mat,t] = rain_mat(rate_decr,t_interval,num_gocce,mat,t)
    %z = zeros(side,side,t_max);
    %for t = 1:t_max
    mat(mat ~= 0) = mat(mat ~= 0) - rate_decr * 255;
    if rem(t,t_interval) == 0
        mat = create_mat(mat,100,rate_decr,num_gocce);
    end
    t = t+1;
        
        %img = image(mat)
        %z(:,:,t) = mat;
    %end
end