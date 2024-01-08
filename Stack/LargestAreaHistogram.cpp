/**
 * @file LargestAreaHistogram.cpp
 * @author Love Babbar
 * 
 * @brief Check prev small next smaller (mul itlself by number of bars which come in between)
 * 
 * @version 0.1
 * @date 2024-01-08
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<int> prevSmallerElement(vector<int> &nums , int n){
        stack<int> st;
        vector<int> prev(n);

        st.push(-1);
        for(int i = 0 ; i < n ; i++){
            int curr = nums[i];
            while(st.top() != -1 && nums[st.top()] >= curr){
                st.pop();
            }
            prev[i] = st.top();
            st.push(i);
        }
        return prev;
    }
    vector<int> nextSmallerElement(vector<int> &nums , int n){
        stack<int> st;
        vector<int> next(n);

        st.push(-1);

        for(int i = n - 1 ; i >= 0 ; --i){
            int curr = nums[i];
            while(st.top() != -1 && nums[st.top()] >= curr){
                st.pop();
            }
            next[i] = st.top();
            st.push(i);
        }
        return next;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        if(n == 1) return heights[0];

        vector<int> prev = prevSmallerElement(heights , n);
        vector<int> next = nextSmallerElement(heights , n);

        int maxi = INT_MIN;
        for(int i = 0 ; i < n ; ++i){
            int l = heights[i];
            
            if(next[i] == -1) next[i] = n;

            int b = next[i] - prev[i] - 1;
            int newArea = l * b;
            maxi = max(newArea , maxi);
        }
        return maxi;
    }
};