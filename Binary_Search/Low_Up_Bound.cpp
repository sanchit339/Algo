/**
 * @file Low_Up_Bound.cpp
 * @author  Striver
 * @brief 
 * @version 0.1
 * @date 2023-09-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int lowerBound(vector<int> v , int target){
        int low = 0 , high = v.size() - 1 , ans;
        while(low <= high){
            int mid = (low + high) >> 1;
            if(v[mid] >= target){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};

int main(){
    vector<int> v = {1 , 2, 4, 5 ,5 , 5, 5 ,6 , 6 ,7 ,8 };
    Solution ans;
    cout << ans.lowerBound(v , 5);
}