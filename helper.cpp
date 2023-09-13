
#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};



class Solution{
    public:
        Node * inOrderSuccessor(Node *root, Node *x){ // 8 -> 

            Node * ans = NULL;
            while(root){
                if(root -> data > x -> data){
                    ans = root;
                    root = root -> right;
                }
                else{
                    root = root -> left;
                }
            }
            return ans;
        }
};

int main(){
    int t;
}