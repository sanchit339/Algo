#include<bits/stdc++.h>
using namespace std;
const int M = 10e9+7;
const int N = 1e5+10;
long long fact[N]; // precomputing the factorial

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL),cout.tie(NULL);
    fact[0]=fact[1]=1;
    for(int i=2;i<N;i++){
        fact[i]=(fact[i-1]*i)%M;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ans = 0;
        while(n--){
            int x ; cin >> x;
            ans += fact[x];
        }
        cout << ans << endl;
    }
}
