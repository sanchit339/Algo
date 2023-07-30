/*
    given n string and q queries
    in each query you are given a string 
    print frequency of the string

    n<=10^6
    |s| <= 100
    q<=10^6
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> m_p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m_p[s]++;
    }
    int q;
    cin>>q;
    while (q--){
        string s;
        cin>>s;
        cout<<m_p[s]<<endl;
    }
    // for(auto val:m_p){
    //     cout<<val.first<<" "<<val.second<<endl;
    // }
}
