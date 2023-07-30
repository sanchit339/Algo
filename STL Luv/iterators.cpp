#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> v = {1,2,3,4,5};
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // // creating iterations
    // vector<int> ::iterator it = v.begin();
    // cout<<(*it)<<" ";
    // cout<<(*(it+3))<<endl; // i=3 rd element
    // for(it=v.begin();it!=v.end();it++){
    //     cout<<(*it)<<" ";
    // }
    // cout<<endl;
    // vector<pair<int,int>> v_p = {{1,2},{3,4},{5,6}};
    // vector<pair<int,int>> :: iterator it;
    // for(it = v_p.begin();it!=v_p.end();it++){
    //     cout<< (*it).first <<" "<< (*it).second << endl; 
    // }

    // // access with arrow
    // cout<<" // access with arrow "<<endl;
    // for(it = v_p.begin();it!=v_p.end();it++){
    //     cout<< (it->first) <<" "<< (it->second) << endl; 
    // }

    // range based loop
    // vector<int>v;
    // for(auto value:v){
    //     v.push_back(value);
    // }
    // for(auto value:v){
    //     cout<<value<<" ";
    // }
}





// reverse iterators

// auto cur_it = --marks_map.end(); // its the last iterator
// 	while(true){ //infinite loop
// 		auto &students = (*cur_it).second;
// 		int marks = (*cur_it).first;
//         for(auto student : students){
// 		    cout << student << " " << marks <<endl;
// 		}
// 		if(cur_it==marks_map.begin()) break;
// 		cur_it--;
// 	}