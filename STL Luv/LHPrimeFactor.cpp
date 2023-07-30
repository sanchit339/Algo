#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10; //vector global size 

vector<bool> isPrime(N,1);
vector<int> lp(N,0),hp(N,0);

int main(){
    isPrime[0]=isPrime[1]=false; // making 0 and 1 as false 
    for(int i = 2 ; i < N ; i++){
        if(isPrime[i] == true){ // new number is prime
            for(int j = i*2 ; j<N ; j += i){   // i is the prime number and multiple of i should be marked false so j is incresed accordingly
                isPrime[j] = false;
                hp[j] = 1;
                if(lp[j] == 0){
                    lp[j] = 1;
                }
            }
        }
    }
    int num; 
    cin >> num;
    vector<int> prime_factorsss;

    while(num>1){
        int prime_factor = hp[num]; //higest  
    }
}