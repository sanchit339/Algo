#include<bits/stdc++.h>
using namespace std;
int main(){
    // pairs of int 
    pair<int,int> p;
    p = make_pair(2,3);
    cout<<p.first<<" "<<p.second<<endl;
    // p = make_pair(3,5); for multiple values use pairs of array
    pair<int,int> p_array[4]; // size defined while defining 
    p_array[0]={2,3}; // 
    p_array[1]={5,7};
    p_array[2]={9,0};
    p_array[3]={7,1};
    // for(int i=0;i<4;i++){
    //     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    // }
    // cout<<p_array[0]-p_array[1]<<endl;
    // pair<int,string>p1;
    // p1={2,"sanchit"};
    // cout<<p1.first<<" "<<p1.second<<endl;

    // swap function
    swap(p_array[0],p_array[3]); // swaps full pair
    cout<<p_array[0].first<<" "<<p_array[3].second<<endl;
    // for(int i=0;i<4;i++){
    //     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    // }
    
    // pair<int,int>p2;
    // // take input
    // cin>>p2.first>>p.second;
    // cout<<p2.first<<" "<<p.second ;
}