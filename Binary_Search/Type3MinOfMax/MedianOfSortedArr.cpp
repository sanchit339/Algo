/**
 * @file MedianOfSortedArr.cpp
 * @author Striver
 * @brief > In Brute force approch lenA + lenB / 2
 *          Figured out the mid indexes
 *          find it and return the answer as per requirements
 * @version 0.1
 * @date 2023-09-18
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2){
        // choose the min len array
        if (nums1.size() > nums2.size()){
            return findMedianSortedArrays(nums2, nums1);
        }

        int s1 = nums1.size(), s2 = nums2.size();
        int low = 0, high = s1;

        while (low <= high){
            int mid1 = (low + high) >> 1;
            int mid2 = (s1 + s2 + 1) / 2 - s1; // handle even / odd (+ 1)

            // left side min
            int left1 = mid1 == 0 ? INT_MIN : nums1[mid1 - 1];
            int left2 = mid2 == 0 ? INT_MIN : nums2[mid2 - 1];

            // right side maxi
            int right1 = mid1 == s1 ? INT_MAX : nums1[mid1];
            int right2 = mid2 == s2 ? INT_MAX : nums2[mid2];

            // check
            if (left1 <= right2 && left2 <= right1){
                if((s1 + s2) % 2 == 0){
                    return ((max(left1 , left2) + min(right1 , right2)) / 2.0);
                }
                else return max(left1 , left2); // odd len
            }

            else if(left1 > right2){
                high = mid1 - 1;
            }
            else low = mid1 + 1;
        }
        return 0.0;
    }
};
