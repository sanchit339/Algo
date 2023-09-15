/**
 * @file Sqrt.cpp
 * @author Finding Floor Srqt
 * @brief Take low = 1 , high = n
 * @version 0.1
 * @date 2023-09-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Solution{
    int sqrt(long long target){
        long long low = 1 , high = target;
        while(low <= high){
            long long mid = low - ( high - low ) / 2;
            long long mul = mid * mid ;
            if(mul <= target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return high;
    }
};