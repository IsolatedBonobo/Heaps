#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n, int i){
    int index = 1;
    int leftIndex = 2 * i ;
    int rightIndex = 2 * i + 1 ;
    
    int largest = index ; 
    if(leftIndex <= n && arr[largest] < arr[leftIndex])
        largest = leftIndex;
    if(rightIndex <= n && arr[largest] < arr[rightIndex])
        largest = rightIndex ; 
    if(index != largest ){
        swap(arr[index], arr[largest]);
        index = largest ;
        heapify(arr, n, index);
    }
    
}
// building heap using given array 

void buildHeap(int arr[], int n){
    for(int i = n/2 ; i > 0;i--){
        heapify(arr, n , i);
    }
}
int main(){
    int arr[] = {-1, 12, 42, 75, 95,34, 57, 23};
    int n = 8 ;
    buildHeap(arr, n);
    for(int i =0 ;i< 8;i++){
        cout<<arr[i]<<" ";
    }
}