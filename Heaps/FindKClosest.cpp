/**
 * @file FindKClosest.cpp
 * @author Aditya Verma (https://leetcode.com/problems/find-k-closest-elements/)
 * 
 * @brief Take Pair(abs diff)
 * 
 * @version 0.1
 * @date 2023-09-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;

        priority_queue<pair<int , int>> pq;
        for(int i = 0 ; i < arr.size() ; i++){
            pq.push({abs(arr[i] - x) , arr[i]});
            if(pq.size() == k + 1){
                pq.pop();
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin() , ans.end());
        return ans;
    }
};