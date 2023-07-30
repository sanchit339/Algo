// unorderd Maps

// implemented using hash-table

// you cant use pairs of unorder map coz hash funciton cannot be defined for pairs 

#include<bits/stdc++.h>
using namespace std;
int main(){
    // difference 
    // 1. inbuilt implementaion
    // 2. Time Complexity
    // 3. valid key database  ie  you cant use pair ,,  set  ,, coz hash  function is not Defined
    unordered_map<int,string> m;   // till now....   output order is unorderd 
    m[1]="sanchit";
    m[2]="vishu";   // insertion and output is O(1);
    m[3]="yash";    // ie O(n)
    m[4]="pritam";
    m[6]="yash";
    m[2]="sanchit";
    m.insert({5,"shubham"});
    for(auto value:m){
        cout<<value.first<<" "<<value.second<<endl;
    }
}

// question

/*
    given
*/