#include <bits/stdc++.h>
using namespace std;
int main(){

    // uses red black trees for implementation
    // self balancing tree

    map<int,string> m_p;
    // general method to store in map

    // saves only distinct key value pair
    
    // for insertion of string it compare the string in the order of n (for big string)
    
    m_p[1]="abc";
    m_p[2]="san"; // Olog(n); and general insertion and printing is  // nlog(n) :)
    m_p[3]="bcs";
    m_p.insert({4,"sanchit"});

    // erase funtion 
    m_p.erase(4);

     
    // for(auto value:m_p){
    //     cout<<value.first<<" "<<value.second<<endl;
    // } 

    // new feature
    for(auto [k,v] : m_p){
        cout << k << " " << v << "\n";
    }
    
    // find 

    auto m = m_p.find(3);
    if(m==m_p.end()){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<m->first<<" "<<m->second << " " <<endl;
    }
}