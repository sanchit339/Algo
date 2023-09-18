/**
 * @file FindKthMissing.cpp
 * @author Striver
 * @brief At the End OF BS low and high (opposite polarity)
 *        return high + 1 + k
 *        arr[high] + k - (arr[high] - high - 1)    
 * @version 0.1
 * @date 2023-09-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0 , high = arr.size() - 1;
        while (low <= high){
            int mid = (high + low) / 2;
            int missing = arr[mid] - (mid + 1);
            if(missing < k){
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return high + 1 + k; // low + k
    }
};