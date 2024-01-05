#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node * left = NULL;
    node * right = NULL;
};

struct MultiNode{
    int data;
    MultiNode * arr[];
};

class classNode{
    public:
        int data;
        classNode * left = NULL;
        classNode * right = NULL;

    classNode(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};



node * createNode(int data){
    node * newNode = new node;
    newNode -> data = data;
    newNode -> left = NULL;
    newNode -> right = NULL;

    return newNode;
}


node * createTreeFromUserInput(node *root){
    cout << "Enter The data" << endl;
    int data;
    cin >> data;

    root = createNode(data);

    if(data == -1) return NULL;

    cout << "Enter Data for insertion in Left of :" << data << endl;
    root -> left = createTreeFromUserInput(root -> left);
    cout << "Enter Data for insertion in right of : " << data << endl;
    root -> right = createTreeFromUserInput(root -> right);
    
    return root;
}

void levelOrderTraversal(node *root){
    queue< node* > q; 
    q.push(root);
    // logic for endl
    q.push(NULL);

    while(!q.empty()){
        node * temp = q.front();
        q.pop();

        // logic for endl
        if(temp == NULL){
            cout << endl;
            if(!q.empty()){ // has some data
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

void buildTreeFromLevelOrder(node * &root){
    queue<node *> q;
    cout << "Enter Data to the root" << endl;
    int data;
    cin >> data;
    root = createNode(data);

    q.push(root);

    while(!q.empty()){
        node * top = q.front();
        q.pop();
        cout << "enter Data for left node of :" << top -> data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1){
            top -> left = createNode(leftData);
            q.push(top -> left);
        }

        cout << "Enter Data for the Right of :" << top -> data << endl;
        int rightData;
        cin >> rightData;
        if(rightData != -1){
            top -> right = createNode(rightData);
            q.push(top -> right);
        }
    }
}

void inOrderTraversal(node * root){
    if(root == NULL) return;
    if(root != NULL){
        inOrderTraversal(root -> left);
        cout << root -> data << endl;
        inOrderTraversal(root -> right);
    }
}

int main(){
    node * root = NULL;
    // root = createTreeFromUserInput(root);

    // cout << "build Tree from inoder Traversal " << endl;

    buildTreeFromLevelOrder(root);

    // cout << "InOrderTraversal of Tree" << endl;

    // inOrderTraversal(root);
    // cout << endl;

    // cout << "LevelOrderTraversal of Tree" << endl;
    levelOrderTraversal(root);
    // cout << endl;
}

