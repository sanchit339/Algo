/**
 * @file FlyodWarshalImpl.cpp
 * @author Luv
 * @brief > Deletion <- opposite we apply flyod warshal 
 * @version 0.1
 * @date 2023-08-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

const int N = 510;
long long dist[N][N];

int main(){
    int n ; cin >> n;
    
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cin >> dist[i][j];
        }
    }

    vector<int> v(n);
    for(auto &it : v){
        cin >> it;
    }
    reverse(v.begin() , v.end()); // deletion order

    vector< long long > ans;
    for(int k = 0 ; k < n ; k++){
        int K_V = v[k];
        for(int i = 1 ; i <= n ; i++){ // as per stored
            for(int j = 1 ; j <= n ; j++){
                long long mini = dist[i][K_V] + dist[K_V][j];
                dist[i][j] = min(dist[i][j] , mini);
            }
        }
        // after itr
        long long sum = 0;
        for(int i = 0 ; i <= k ; ++i){
            for(int j = 0 ; j <= k ; ++j){
                sum += dist[v[i]][v[j]]; // till i , j range
            }
        }
        ans.push_back(sum);
    }

    reverse(ans.begin() , ans.end());

    for(auto it : ans){
        cout << it << " " ; 
    }
}