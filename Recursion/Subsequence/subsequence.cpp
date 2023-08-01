/*
    to Pick and to not Pick Idea

    TC 2^n * n <-- for printing or storing (n)
    SC (N) depth of tree
*/
 
 /*
    for any n number of subset are 2 ^ n
 */
#include<bits/stdc++.h>
using namespace std;

void genSequence(int idx , vector<int> &temp , int arr[] , int n , vector<vector<int>> &subsequence){

    // base case to print the subseq when recursive call for that gets executed

    if(idx == n){ // particular call gets executed
        for(auto i : temp)
            cout << i << " ";

        subsequence.push_back(temp); // just in case you want to store subsequences

        if(temp.size() == 0) cout << "{}"; // print empty sequence too
        cout << "\n";
        
        return; /* *** */ // stop the recursion 
    }
    
    temp.push_back(arr[idx]);
    genSequence(idx + 1 , temp , arr , n , subsequence);

    temp.pop_back(); // crete a new tree without taking the last ele
    genSequence(idx + 1 , temp , arr , n , subsequence);

}

int main(){
    int arr[3] = {3 , 1 , 2};
    int n = 3;
    vector<int>temp; // to hold and carry the sub-seq 

    vector<vector<int>>subsequence;
    genSequence( 0 , temp , arr , n , subsequence);

    for(auto child : subsequence){
        for(auto it : child){
            cout << it << " ";
        }
        cout << "\n";
    }
}
