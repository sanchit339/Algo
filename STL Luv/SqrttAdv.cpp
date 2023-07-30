#include<bits/stdc++.h>
using namespace std;

// to get accuracy till some point
double eps = 1e-6; //10^(-6)

int main(){
    double x;
    cin>>x;
    double lo=1,hi=x,mid;
    while(hi-lo>eps){
        mid = (hi+lo)/2;
        if(mid*mid<x){
            lo = mid;
        }
        else{
            hi = mid; // no monoletic function
        }
    }
    cout<<"with function"<<endl;
    cout<<sqrt(x)<<endl;
    cout<<hi<<"   "<<lo<<endl;
    cout<<setprecision(7)<<hi<<endl;
}
// to find the nth root 
 
// use n(mid*mid) //