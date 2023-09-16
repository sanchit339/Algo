/**
 * @file KOKO.cpp
 * @author Striver
 * @brief https://leetcode.com/problems/koko-eating-bananas/
 *          Answer From Known Range
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
    int calTime(vector<int> &piles , int hour){
        int ans = 0 , n = piles.size();
        for(int i = 0 ; i < n ; i++){
            ans += ceil((double)piles[i] / (double)hour);
        }
        return ans;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 , high = *max_element(piles.begin() , piles.end());
        while(low <= high){
            int mid = (low + high) >> 1;

            int total = calTime(piles , mid);
            if(total <= h) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};

