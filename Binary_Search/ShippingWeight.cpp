/**
 * @file ShippingWeight.cpp
 * @author Striver Sanchit
 * @brief https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
 * @version 0.1
 * @date 2023-09-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    int check( vector<int> &arr , int weight ){
        int days = 0 , load = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] + load > weight){
                days += 1;
                load = arr[i];
            }
            else{
                load += arr[i];
            }
        }
        return days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        if(n == 1) return weights[0];

        int mini = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            mini = max(weights[i] , mini);
        }

        int low = mini , high = accumulate(weights.begin() , weights.end() , 0);
        while(low <= high){
            int mid = (high + low) / 2;
            int daysGot = check(weights , mid );
            if(daysGot <= days){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return low;
    }
};