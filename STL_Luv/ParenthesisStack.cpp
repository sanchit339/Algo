// basic logic only push opening bracket and when opening bracket is present then pop the opening bracket
// (step 2) if stack is empty (turu looob) :)(
#include<bits/stdc++.h>
using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     stack<char> st;
//     for(int i=0;i<s.length();i++){
//         char a = s[i];
//         cin>>a;
//         if(a=='(') {
//             st.push(a);
//         }
//         if(a==')' && st.top()=='('){
//             st.pop();
//         }
//     }
//     if(st.empty()){
//         cout<<true<<endl;
//     }
//     else{
//         cout<<false<<endl;
//     }
//     cout<<false<<endl;
// }
unordered_map<char,int> symbols = {{'{',-3},{'[',-2},{'(',-1},{'}',3},{']',2},{')',1}};
string isBalanced(string s){
    stack<char> st;
    for(char character:s){
        if(symbols[character]<0){
            st.push(character);
        }
        else{
            if(st.empty()) return "no";
            char top = st.top();
            st.pop();
            if(symbols[top]+symbols[character] !=0){
                return "no";
            }
        }
    }
    if(st.empty()) return "yes";
    return "no";
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
}