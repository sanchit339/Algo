/**
 * @file ceil.cpp
 * @author Sanchit
 * @brief 
 * @version 0.1
 * @date 2023-11-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

int ceil(int n , vector<int>v){
    int high = v.size() - 1 , low = 0 , ans = 0;
    while (low <= high){
        int mid = low + (high - low) / 2;
        if(v[mid] < n){
            ans = v[mid];
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
    
}

int main(){
    vector<int> v ={1 ,2 ,3 ,4 ,6 ,7,8};
    cout << ceil( 5 , v);
}