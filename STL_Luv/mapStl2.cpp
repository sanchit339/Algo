
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,bool> m;
    for(int i=0;i<5;i++){
        int x; 
        cin>>x;
        m.insert({x,true});
    }
    for(auto val:m){
        // cout<<val.second<<" ";
        if(val.second){
            cout<<"true"<<endl;
        }
    }
    m.insert({5,false});
    auto it = m.find(5);
    if(it==m.end()){
        cout<<"element not found"<<endl;
    }
    else{
        m.erase(5);
    }
    for(auto val:m){
        cout<<val.first<<" ";
    }
    // return 0;
}