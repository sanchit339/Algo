/*
 Given N string , print unique strings
 in lexolographical order with their frequency

 N <=10^5
 |s| <= 100 // note if string size is big then its difficult for insertion

 input :- 
 8
 abc
 def
 abc
 ghj
 jkl
 ghj
 ghj
 abc

*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++; 
    }
    // for(auto value:m){
    for(auto value:m){
        cout<<value.first<<" "<<value.second<<endl;
    }
}
*/
// /*
#include<bits/stdc++.h>
using namespace std;
// void print(unordered_map)
int main(){
    unordered_map<string,int> m_p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m_p[s]++;
    }
    for(auto i:m_p){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
// */