/**
 * @file SearchRotatedDupli.cpp
 * @author your name (you@domain.com)
 * @brief just handle one test case
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
    bool search(vector<int>& nums, int target) {
        int low = 0 , high = nums.size() - 1;
        while(low <= high){
            int mid = (high + low) / 2 ;

            if( nums[mid] == target ) return true;
            
            // edge case
            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                high-- , low++;
                continue;
            }


            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && nums[mid] >= target){
                    high = mid - 1;
                }
                else low = mid + 1;
            }
            else{
                if(nums[mid] <= target && nums[high] >= target){
                    low = mid + 1;
                }
                else high = mid - 1;
            }
        }
        return false;
    }
};