#include <bits/stdc++.h>
using namespace std;

int main(){
    int decimal; cin >> decimal;
    int binary[32] , index = 0;

    while (decimal > 0){
        binary[index] = decimal % 2;
        decimal /= 2;
        index++;
    }

    // print in reverse

    // for hackerrank
    int cnt = 0 , maxi = 0;
    for(int i = 0 ; i < index ; ++i){ // index *
        if(binary[i] == 1){
            cnt++;
            maxi = max(cnt , maxi);
        }
        else cnt = 0;
    }
    cout << maxi;
}