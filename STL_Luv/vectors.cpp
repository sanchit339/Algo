// #include<bits/stdc++.h>
// using namespace std;
// void print(vector<int> &v){
//     cout<<"size"<<" "<<v.size()<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int>v;
//     int n;
//     cin>>n;
//     v.push_back(10); // basic push_back function
//     // taking input through loop  
//     /*
//     5
//     1 2 3 4 5 
//     */   // here "size" is given
//     for(int i=0;i<n;i++){
//         int x; //defining a variable
//         cin>>x;
//         v.push_back(x);
//     }

//     // printing output

//     // for(int i:v){
//     //     cout<<i<<" ";
//     // }

//     // input 

//     // for (auto &val : v)
//     // {
//     //     cin >> val;
//     // }
//     cout<<endl;
//     // print(v);

//     // initializing size at start
//      //vector<int>c[10]; // absulutly no use due to dynamic nature
//     //  vector<int> c(10,5);
//     //  print(c);

//     //copying of vector
//     // vector<int>v;
//     // v.push_back(10);
//     // v.push_back(12);
//     // print(v);
//     // //copy
//     // vector<int> &v2=v; // 0(n) operation
//     // // v2.pop_back();
//     // // v2.pop_back();
//     // v2.push_back(10);
//     // v.push_back(12);
//     // print(v2); //10 12 10 12
// // } 


// vectors of pairs

// int main(){
//     vector<pair<int,int>> v = {{1,2},{3,4},{4,5}};
//     cout<<"vector size :- "<<v.size()<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i].first<<" "<<v[i].second<<endl;
//     }

//     taking input
//     vector<pair<int,int>> v;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x,y;
//         cin>>x>>y;
//         v.push_back({x,y});
//     }

//     for(int i:v){
//         cout<<v[i].first<<" "<<v[i].second<<endl;
//     }
//     cout<<"the value stored int the vectors :- "<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i].first<<" "<<v[i].second<<endl;
//     }

// void printVec(vector<int>&v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i].first
//     }
// }