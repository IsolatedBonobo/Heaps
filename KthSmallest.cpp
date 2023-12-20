#include<bits/stdc++.h>
using namespace std;
int getKthLargest(int arr[], int n, int k){
    priority_queue<int, vector<int>, greater<int> > pq ;

    for(int i = 0; i < k; i++){
        pq.push(arr[i]);
    }
    for(int i = k; i < n; i++){
        int element = arr[i];
        if(element > pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    return pq.top();
}
int getKthSmallest(int arr[], int n, int k){
    priority_queue<int> pq ;

    for(int i = 0; i < k; i++){
        pq.push(arr[i]);
    }
    for(int i = k; i < n; i++){
        int element = arr[i];
        if(element < pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    return pq.top();
}
int main(){
    int arr[] = {3, 11, 6, 9, 4, 12, 2, 8};
    int n = 8;
    int k = 1;
    int ans = getKthLargest(arr, n, k);
    cout<<ans;
}