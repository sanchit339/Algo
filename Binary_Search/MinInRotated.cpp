/**
 * @file MinInRotated.cpp
 * @author Striver
 * @brief eliminate the left / right half
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
    int findMin(vector<int>& nums) {
        int low = 0 , high = nums.size() - 1 , ans = INT_MAX;
        while( low <= high ){
            int mid = ( high + low ) / 2;
            if( nums[low] <= nums[mid] ){
                ans = min( ans , nums[low] );
                low = mid + 1;
            }
            else {
                high = mid - 1;
                ans = min( ans , nums[mid] );
            }
        }
        return ans;
    }   
};


class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0 , high = nums.size() - 1 , ans = INT_MAX;
        while( low <= high ){
            int mid = ( high + low ) / 2;

            // if right is sorted
            if(nums[low] <= nums[high]){
                ans = min(ans , nums[mid]);
                break;
            }

            if( nums[low] <= nums[mid] ){
                ans = min( ans , nums[low] );
                low = mid + 1;
            }
            else {
                high = mid - 1;
                ans = min( ans , nums[mid] );
            }
        }
        return ans;
    }   
};