// https://codeforces.com/contest/363/problem/B

/*
   sliding window : By mohhamad farz 
   O(n*k) k window size
*/


#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6+10;
const int M = 998244353;


//iterator conditions
#define f first
#define S second
#define all(x) begin(x),end(x)
#define allr(x) rbegin(x),rend(x)
#define pb(x) push_back(x)
#define endl "\n"


void solve(){
   int n , k; cin >> n >> k;
   int arr[n];
   for(int i=0;i<n;i++){
      cin >> arr[i];
   }
   vector<int>v;
   int ans = 0;
   ll sum = 0;
   // while(i<n){
   for(int j=0;j<k;j++){
      sum+=arr[j];
   }
   v.push_back(sum);
   for(int i=k;i<n;i++){
      sum = sum-arr[ans]+arr[i];
      v.push_back(sum);
      ans++;
   }
   int fans = min_element(all(v))-v.begin();
   cout << fans+1 << endl;
}

int main() {
//    IOS;tie; // Saviour :) 
   ll test=1;
   // cin>>test;
   while(test--){
      solve();
   }
   return 0;
}