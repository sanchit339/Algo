/**
 * @file FindPeak.cpp
 * @author Striver
 * @brief Check 1st and last element
 * @version 0.1
 * @date 2023-09-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int n = nums.size();

        if(n == 1) return 0;
        //Edge cases
        if(nums[0] > nums[1]) return 0;
        if(nums[n - 2] < nums[n - 1]) return n - 1;

        int low = 1 , high = n - 2;

        while(low <= high){
            int mid = (low + high) / 2;

            // base case
            if( nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
                return mid;

            else if(nums[mid] < nums[mid + 1])
                low = mid + 1;
            else 
                high = mid - 1;
        }
        return -1; // hypothetical
    }
};

