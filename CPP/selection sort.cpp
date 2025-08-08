/**
 * Seletcion sort using c++ in an nteger array
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{
  int i,j;
  for( i =0 ; i < n ; i ++){
    int min = i;
    for ( j = i+1 ; j < n ; j++){
        if(arr[j] < arr[min]){
            min = j;
        }
    }
    // /\swap(arr[i],arr[min]);
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
  for(int k = 0; k < n ; k++){
    cout<<arr[k];
  }
}

int main(){
    int arr[] = {5,3,5,2,1,34,5,67,4};
    int n = sizeof(arr) / sizeof(arr[0]) ;
    selection_sort(arr,n);
}