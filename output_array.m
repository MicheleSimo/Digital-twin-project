function outputArray = fcn(s1,s2,s3,s4,s5,s6, numGocce, rateDecr)

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
indexClasses = [0,1,2,3,4]
value_rain = 4
value_rate = 4

outputArray = [s1,s2,s3,s4,s5,s6];


switch numGocce

    case (numGocce >= 0 && numGocce <= 30) && (rateDecr >= 0.0 && rateDecr <= 0.2)
        value_rain = indexClasses(1);
        value_rate = indexClasses(1);

    case ((numGocce > 30 && numGocce <= 60) && (rateDecr > 0.2 && rateDecr <= 0.4)) || ((numGocce >= 0 && numGocce <= 30) && (rateDecr > 0.4 && rateDecr <= 0.6)) || ((numGocce > 60 && numGocce <= 90) && (rateDecr >= 0.0 && rateDecr <= 0.2))
        value_rain = indexClasses(2);
        value_rate = indexClasses(2);
    
    case ((numGocce > 60 && numGocce <= 90) && (rateDecr > 0.4 && rateDecr <= 0.6)) || ((numGocce > 30 && numGocce <= 60) && (rateDecr > 0.6 && rateDecr <= 0.8)) || ((numGocce > 90 && numGocce <= 120) && (rateDecr > 0.2 && rateDecr <= 0.4)) || ((numGocce >= 0 && numGocce <= 30) && (rateDecr > 0.8 && rateDecr <= 1.0)) || ((numGocce > 120 && numGocce <= 150) && (rateDecr >= 0.0 && rateDecr <= 0.2))
        value_rain = indexClasses(3);
        value_rate = indexClasses(3);

    case ((numGocce > 90 && numGocce <= 120) && (rateDecr > 0.6 && rateDecr <= 0.8)) || ((numGocce > 60 && numGocce <= 90) && (rateDecr > 0.8 && rateDecr <= 1.0)) || ((numGocce > 120 && numGocce <= 150) && (rateDecr > 0.4 && rateDecr <= 0.6))
        value_rain = indexClasses(4);
        value_rate = indexClasses(4);

    case (numGocce > 120 && numGocce <= 150) && (rateDecr > 0.8 && rateDecr <= 1.0)
        value_rain = indexClasses(5);
        value_rate = indexClasses(5);

end

switch value_rain

    case value_rain == 0 && value_rate == 0
        if outputArray(1) < minVal0(1) || outputArray(1) > maxVal0(1)
            outputArray(1) = 89;

        end

        if outputArray(2) < minVal1(1) || outputArray(2) > maxVal1(1)
            outputArray(2) = -30+30*rand(1,1);

        end

        if outputArray(3) < minVal2(1) || outputArray(3) > maxVal2(1)
            outputArray(3) = -1+1*rand(1,1);

        end

        if outputArray(4) < minVal3(1) || outputArray(4) > maxVal3(1)
            outputArray(4) = -1+1*rand(1,1);

        end

        if outputArray(5) < minVal4(1) || outputArray(5) > maxVal4(1)
            outputArray(5) = -5+5*rand(1,1);

        end

        if outputArray(6) < minVal5(1) || outputArray(6) > maxVal5(1)
            outputArray(6) = -2+2*rand(1,1);

        end

    case value_rain == 1 && value_rate == 1
        if outputArray(1) < minVal0(2) || outputArray(1) > maxVal0(2)
            outputArray(1) = -85+85*rand(1,1);

        end

        if outputArray(2) < minVal1(2) || outputArray(2) > maxVal1(2)
            outputArray(2) = -53+53*rand(1,1);

        end

        if outputArray(3) < minVal2(2) || outputArray(3) > maxVal2(2)
            outputArray(3) = -70+70*rand(1,1);

        end

        if outputArray(4) < minVal3(2) || outputArray(4) > maxVal3(2)
            outputArray(4) = -125+125*rand(1,1);

        end

        if outputArray(5) < minVal4(2) || outputArray(5) > maxVal4(2)
            outputArray(5) = -115+115*rand(1,1);

        end

        if outputArray(6) < minVal5(2) || outputArray(6) > maxVal5(2)
            outputArray(6) = -125+125*rand(1,1);

        end

    case value_rain == 2 && value_rate == 2
        if outputArray(1) < minVal0(3) || outputArray(1) > maxVal0(3)
            outputArray(1) = -85+85*rand(1,1);

        end

        if outputArray(2) < minVal1(3) || outputArray(2) > maxVal1(3)
            outputArray(2) = -102+102*rand(1,1);

        end

        if outputArray(3) < minVal2(3) || outputArray(3) > maxVal2(3)
            outputArray(3) = -95+95*rand(1,1);

        end

        if outputArray(4) < minVal3(3) || outputArray(4) > maxVal3(3)
            outputArray(4) = -167+167*rand(1,1);

        end

        if outputArray(5) < minVal4(3) || outputArray(5) > maxVal4(3)
            outputArray(5) = -130+130*rand(1,1);

        end

        if outputArray(6) < minVal5(3) || outputArray(6) > maxVal5(3)
            outputArray(6) = -113+113*rand(1,1);

        end

    case value_rain == 3 && value_rate == 3
        if outputArray(1) < minVal0(4) || outputArray(1) > maxVal0(4)
            outputArray(1) = -165+165*rand(1,1);

        end

        if outputArray(2) < minVal1(4) || outputArray(2) > maxVal1(4)
            outputArray(2) = -66+66*rand(1,1);

        end

        if outputArray(3) < minVal2(4) || outputArray(3) > maxVal2(4)
            outputArray(3) = -73+73*rand(1,1);

        end

        if outputArray(4) < minVal3(4) || outputArray(4) > maxVal3(4)
            outputArray(4) = -112+112*rand(1,1);

        end

        if outputArray(5) < minVal4(4) || outputArray(5) > maxVal4(4)
            outputArray(5) = -108+108*rand(1,1);

        end

        if outputArray(6) < minVal5(4) || outputArray(6) > maxVal5(4)
            outputArray(6) = -81+81*rand(1,1);

        end

    case value_rain == 4 && value_rate == 4
        if outputArray(1) < minVal0(5) || outputArray(1) > maxVal0(5)
            outputArray(1) = -63+63*rand(1,1);

        end

        if outputArray(2) < minVal1(5) || outputArray(2) > maxVal1(5)
            outputArray(2) = -38+38*rand(1,1);

        end

        if outputArray(3) < minVal2(5) || outputArray(3) > maxVal2(5)
            outputArray(3) = -61+61*rand(1,1);

        end

        if outputArray(4) < minVal3(5) || outputArray(4) > maxVal3(5)
            outputArray(4) = -114+114*rand(1,1);

        end

        if outputArray(5) < minVal4(5) || outputArray(5) > maxVal4(5)
            outputArray(5) = -104+104*rand(1,1);

        end

        if outputArray(6) < minVal5(5) || outputArray(6) > maxVal5(5)
            outputArray(6) = -104+104*rand(1,1);

        end

end

end


