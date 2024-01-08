/**
 * @file NextGraterEle.cpp
 * @author Love Babbar
 * 
 * @brief Question is Similar to Next Greater Element
 * @link https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
 * 
 * @version 0.1
 * @date 2024-01-07
 * 
 * @copyright Copyright Sanchit(c) 2024
 * 
 */


/*
    Just flip the condition for prev Smaller element
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;

        int n = prices.size();
        vector<int> ans(n);
        
        st.push(prices[n - 1]);
        ans[n - 1] = prices[n - 1];

        for (int i = n - 2; i >= 0; --i) {
            int curr = prices[i];

            while (!st.empty() && st.top() > curr) {
                st.pop();
            }
            ans[i] = curr - (st.empty() ? 0 : st.top());
            st.push(curr);
        } 
        return ans;
    }
};