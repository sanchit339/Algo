#include<bits/stdc++.h>
using namespace std;
int main(){

    // as name suggests it can store multiple (similar) values of input

    multiset<string> ms;
    ms.insert("abc");
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        ms.insert(x);
    }
    for(auto val:ms){
        cout<<val<<endl;
    }

    // while using find operation iterator return the 1st occurance of the duplicate element 
    auto it = ms.find("abc");
        if(it!=ms.end()){
            cout<<"yes\n";
            // cout<<
        }
        else{
            cout<<"no\n";
        }

    // **** if you want to delete only the first occurance of *****
    auto itr = ms.find("abc");
    if(it!=ms.end()){
        ms.erase(itr);
    }
    cout<<"after"<<endl;
    for(auto val:ms){
        cout<<val<<endl;
    }

    // new implementation
}