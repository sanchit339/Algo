#include<bits/stdc++.h>
using namespace std;
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s;
    
    // implement secondary stack (Support stack)
    stack<int>ss;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
            if(ss.size() == 0)
                return -1;
            
            return ss.top();
       }
       
       /*returns poped element from stack*/
       int pop(){
           //Write your code here
            if(s.size() == 0)
                return -1;
            
            int ans = s.top();
            s.pop();
            if(ans == ss.top())
                ss.pop();
            return ans;
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
            s.push(x);
            if(ss.size() == 0 || x <= ss.top())
                ss.push(x);
       }
};