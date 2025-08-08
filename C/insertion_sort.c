/**
 * Insertion sort of int array using C
 */
#include<stdio.h>


void insertion_sort(int *arr , int n){
  for(int i = 1 ; i < n ; i++)
  {
    int key = arr[i];
    int j = i - 1;
    while(j >= 0 && arr[j] > key){
        arr[j + 1] = arr[j];
        j = j - 1;
        
    }
    printf("after while loop j= %d", j);
    arr[j + 1] = key;
  }
  for (int k =0 ; k < n ; k++){
    printf("%d\n",arr[k]);
  }

}
int main(){
    int arr[] = {19,23,45,6,789,0,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr,n);
}