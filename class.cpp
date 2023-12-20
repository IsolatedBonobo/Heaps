#include<bits/stdc++.h>
using namespace std;
// method 1 that is just merge booth arrays and convert them into heap;
priority_queue<int> merge(vector<int>ans){
    priority_queue<int>heap1;
    for(int i = 0 ;i < ans.size() ; i++){
        heap1.push(ans[i]);
    }
    return heap1;

}
void merge2(priority_queue<int>&heap, int srr[], int n){
    for(int i = 0 ;i < n ; i++){
        heap.push(srr[i]);
    }
}
int main(){
    int arr[5] = {14,37,49,36,83};
    int srr[5] = {84, 26, 92, 15, 10};

    // vector<int>ans; 
    // for(int i = 0 ;i < 5; i ++){
    //     ans.push_back(arr[i]);
    // }
    // for(int i = 0 ; i < 5; i++){
    //     ans.push_back(srr[i]);
    // }

    // priority_queue<int>heap1 = merge(ans);
    // while(!heap1.empty()){
    //     cout<<heap1.top()<<" ";
    //     heap1.pop();
    // }

    priority_queue<int>h1; 
    for(int i = 0 ;i < 5; i++){
        h1.push(arr[i]);
    }
    merge2(h1, srr);
}