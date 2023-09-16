/**
 * @file MakeMBouquet.cpp
 * @author Striver
 * @brief Reduce from the Known Range
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
    bool possible(vector<int>& bloomDay , int day , int m, int k){
        int cnt = 0 , noOfBo = 0;
        for(int i = 0 ; i < bloomDay.size() ; i++){
            if(bloomDay[i] <= day){
                cnt++;
            }
            else{
                noOfBo += (cnt / k);
                cnt = 0;
            }
        }
        noOfBo += (cnt / k);
        return noOfBo >= m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m * 1ll * k * 1ll;
        if(val > bloomDay.size()) return -1;

        int mini = INT_MAX , maxi = INT_MIN;
        
        for(int i = 0 ; i < bloomDay.size() ; i++){
            mini = min(bloomDay[i] , mini);
            maxi = max(bloomDay[i] , maxi);
        }

        int low = mini , high = maxi;
        while(low <= high){
            int mid = (low + high) / 2;
            if(possible(bloomDay , mid , m , k)){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return low;
    }
};
