/*
    sieve method used to find prime factors

    if we remove the is prime condition (TC = log(N))
    else n(log(log(N)))  n+(n/2)+(n/3)+(n/5) all prime numbers
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10; 
vector<bool> isPrime(N,1); // N and all are true 

int main(){
    isPrime[0]=isPrime[1]=false; // making 0 and 1 as false 
    for(int i = 2 ; i < N ; i++){
        if(isPrime[i] == true){ // new number is prime
            for(int j = i*2 ; j<N ; j += i){   // i is the prime number and multiple of i should be marked false so j start from 2
                isPrime[j] = false;
            }
        }
    }
    int q;cin>>q;
    while(q--){
        int x;cin>>x;
        if(isPrime[x]) cout << "Prime" << "\n"; // O(1) coz its precalculated
        else cout << "Not_Prime" << "\n";
    }
}
