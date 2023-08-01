/**
 * @file Nqueens.cpp
 * @author Striver
 * @brief 3 functions check
 * @date 2023-08-01
 */
#include<bits/stdc++.h>
using namespace std;

/*  N^2 space */
class Solution {
public:
bool isSafe(int row , int col , vector<string> temp , int n){
        // check upper diagonal 
        int dupCol = col;
        int dupRow = row;

        while(row >= 0 && col >= 0){
            if(temp[row][col] == 'Q') return false;
            --row , --col;
        }

        col = dupCol;
        row = dupRow;
        //left row check
        while(col >= 0 ){
            if(temp[row][col] == 'Q') return false;
            --col;
        }

        col = dupCol;
        row = dupRow;
        while(row < n && col >= 0){
            if(temp[row][col] == 'Q') return false;
            row++ , col--;
        }

        return true;
    }
public:
    void placeQueen(int col , int n , vector<vector<string>> &ans , vector<string> &temp){
        if(col == n){
            ans.push_back(temp);
            return;
        }

        for(int row = 0 ; row < n ; ++row){
            if(isSafe(row , col , temp , n)){ // see the function call
                temp[row][col] = 'Q';
                placeQueen(col + 1 , n , ans , temp);
                temp[row][col] = '.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
            vector<vector<string>> ans;
            vector<string> temp(n);
            string s(n , '.');
            for(int i = 0 ; i < n ; i++){
                temp[i] = s;
            }
            placeQueen(0 , n , ans , temp);
            return ans;
    }
};