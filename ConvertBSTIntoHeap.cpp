#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left ;
    Node* right;
    Node(int data){
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
Node* insertToBST(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(root -> data > data){
        // insert that data on left 
        root -> left = insertToBST(root -> left, data);
        
    }
    else{
        // insert that data on right
        root -> right = insertToBST(root -> right, data);
       
    }
    return root ;
}
void takeInput(Node* &root){
    
    int data;
    cin >> data;

    while(data != -1){
        root = insertToBST(root, data);
        cin >> data;
    }
}
void inorder(Node* root, vecotr<int>&inarr){
    if(root == NULL){
        return ;
    }
    inorder(root -> left, inarr);
    inarr.push_back(root -> data);
    inorder(root -> right, inarr);
}
void convertBSTIntoHHeap(vector<int>inorder, vector<int>&ans){
    // insert the data via post order traversal 
    

}
int main(){
    Node* tree;
    takeinput() ; 
    vector<int>inarr ; 
    inorder(root, inarr);

}