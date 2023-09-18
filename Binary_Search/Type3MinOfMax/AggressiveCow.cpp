/**
 * @file AggressiveCow.cpp
 * @author https://www.spoj.com/problems/AGGRCOW/
 * @brief For the Logic part of check with the leave me alone
 * @version 0.1
 * @date 2023-09-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Solution{
private:
    bool possible(vector<int> &stalls , int dist , int cows){
        int n = stalls.size();
        int cnt = 1 , last = stalls[0];
        for(int i = 1 ; i < n ; i++){
            if(stalls[i] - last >= dist){
                cnt += 1;
                last = stalls[i];
            }
            if(cnt >= cows) return true;
        }
        return false;
    }
public:
    int solve(vector<int> &stalls , int cows){
        int n = stalls.size();
        int low = 0 , high = stalls[n - 1] - stalls[0];
        while (low <= high){
            int mid = (low + high) / 2;
            bool check = possible(stalls , mid , cows);
            if(check){
                low = mid + 1;
            }
            else high = mid - 1; // maxi the min
        }
        return high; // high 
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , m;
        cin >> n >> m;
        vector<int>v(n);
        for(auto &it : v) cin >> it;
        sort(v.begin() , v.end());

        Solution ans;
        cout << ans.solve(v , m) << "\n";
    }
}