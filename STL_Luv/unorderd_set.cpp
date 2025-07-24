/*
    Given N string and Q queries
    In each query you are given a string 
    print yes if the string is present else no 

    n=10^6;
    |s|<=100;
    q=10^6;
*/
#include<bits/stdc++.h>
using namespace std;

    // basic Implementation to check weather element is present or not
    // uses Hash Table Implementaion

int main(){
    unordered_set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        s.insert(x);  // O(1) operation
    }
    int q;
    cin>>q;
    while (q--){
        string str;
        cin>>str;
        if(s.find(str) == s.end()){
            cout<<"No\n";
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    
    // for(auto val:s){
    //     cout<<val<<endl;
    // }
}