#include<bits/stdc++.h>
using namespace std;
int main(){
    map<pair<string,string>,vector<int>> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a,b;
        int count ;
        cin>>a>>b>>count;
        for(int i=0;i<count;i++){
            int x;
            cin>>x;
            m[{a,b}].push_back(x);
        }
    }
    for(auto &pr:m){ // creating refrences coz copy will take more size in the case of vector;
        auto &full_name = pr.first;
        auto &list = pr.second; 
        cout<<full_name.first<<" "<<full_name.second<<endl;
        cout<<list.size()<<endl;
        for(auto &element : list){
            cout<<element<<" ";
        }
        cout<<endl; 
    }
}