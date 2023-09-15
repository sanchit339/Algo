/**
 * @file First-Last.cpp
 * @author your name (you@domain.com)
 * @brief First And Last Occurance of Element
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
    // forst find if present
    // int // implement Upper Bound And Lower Bound 
    vector<int> FirstLast(vector<int> v , int target ){
        int lower = lower_bound(v.begin() , v.end() , target) - v.begin();
        if(v[lower] != target || lower == v.size()) return {-1 , -1};
        int upper = upper_bound(v.begin() , v.end() , target) - v.begin();
        return {lower , upper - 1};
    }
};