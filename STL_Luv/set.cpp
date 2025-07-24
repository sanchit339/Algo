#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // acts like keys in maps
    // stores the elements in sorted way
    // Red Black Tree implementation (self balanching tree)data structure implementation
    // only stores distinct values 

    set<string> s;
    s.insert("abc");
    s.insert("dfg");   // TC log(n) and access is also log(n)
    int n;
    cin>>n;

    // insertion with loop

    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    for(string val:s){
        cout<<val<<endl;
    }
    auto it = s.find("abc");
    // to avoid segmentation fault we use check
    // if(it!=s.end()){
    //     cout << (*it) << endl;  // log(n);
        //  or we can use here s.erase("abc");
    // }
    // s.erase("abc");
    for(string val:s){
        cout<<val<<endl;
    }
}