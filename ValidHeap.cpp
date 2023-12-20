#include<bits/stdc++.h>
using namespace std;
class newDS{
    public:
    int data ;
    bool ans ;
    newDS(int val, bool check){
        this -> data = val ;
        this -> check = ans ;
    }
};
newDS checkVlalidHeap(Node* root){
    if(root == NULL){
        newDS n;
        n.data = INT_MIN;
        n.ans = true;
        return n ;
    }
    if(root -> left == NULL && root -> right == NULL){
        newDS n;
        n.data = INT_MIN;
        n.ans = true;
        return n ;
    }
    newDS leftAns = checkVlalidHeap(root -> left );
    newDS rightAns = checkVlalidHeap(root -> right );

    if(leftAns.ans == true && rightAns.ans == true && (root -> data > leftAns.data && root -> data < rightAns.data)){
        newDS n ;
        n.data = root -> data ;
        n.ans = true;
        return n ;        
    }
    else{
        newDS n ;
        n.data = root -> data ;
        n.ans = false;
        return n ;  
    }
    
}
int main(){

}