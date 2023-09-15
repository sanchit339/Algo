/**
 * @file TimesArrayRotated.cpp
 * @author Striver
 * @brief Find Idx of Min Element
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
        int low = 0 , high = nums.size() - 1 , ans = INT_MAX , index = -1; 
        while( low <= high ){
            int mid = ( high + low ) / 2;

            if( nums[low] <= nums[mid] ){
                if(nums[low] < ans ){
                    ans = nums[low];
                    index = low;
                }
                low = mid + 1;
            }
            else {
                high = mid - 1;
                if(nums[mid] < ans){
                    ans = nums[mid];
                    index = mid;
                }
            }
        }
        return ans;
    }   
};