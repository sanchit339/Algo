/**
 * @file Single_Element.cpp
 * @author Striver
 * @brief Check Position (Odd  EVEN)
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
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0 , high = nums.size() - 1;
        while(low < high){
            int mid = ( high + low ) / 2;
            if(mid % 2 == 0 && nums[mid] == nums[mid + 1] || mid % 2 == 1 && nums[mid] == nums[mid - 1] ){
                low = mid + 1;
            }
            else high = mid;
        }
        return nums[low];
    }
};