/**
 * insertion sort using c++
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[] , int n){
  for (int i = 1; i < n ; i++){
    /**we start from the second elemnt and check the elemnt on the left and do the swapping
     * we check and swap values 
     * while loop ensures all elemnts in the left are checked
     */
    int key = arr[i];
    int j = i - 1;
    while(j >=0 && arr[j] > key){
        arr[j+1] = arr[j];
        j = j -1 ;
    }
    arr[ j+1 ] = key;
  }
  for (int k = 0 ; k < n ; k++){
    cout<<arr[k]<<endl ;
  }
}
int main(){
 int arr[] = {1,34,5,6,24,56,7,8};
 int n = sizeof(arr) / sizeof(arr[0]);
 insertion_sort(arr,n);
}