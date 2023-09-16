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
    int check(vector<int> &arr , int weight , int days){
        int days = 1 , load = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            if(weight[i] + load > ){
                weight -= arr[i];
            }
            else if(temp < 0){
                i--;
                cnt++;
                temp = weight;
            }
            else{
                cnt++;
                temp = weight;
            }
        }
        return cnt == days;
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
            int mid = low - (high - low) / 1;
            int daysGot = check(weights , mid , days);
            if(){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return low;
    }
};