/**
 * selection sort using C
 */

#include<stdio.h>
void selection_sort(int *arr , int n)
{
for(int i = 0 ; i  < n ; i++){
    int min = i;
    for(int j = i+1 ; j < n ; j++){
     if(arr[j] < arr[min]){
        min = j;
     }
    }
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
}

for (int i = 0 ; i < n ; i ++)
{
    printf("%d\n",arr[i]);
}

}
int main()
{
    int arr [] = {12,45,4,7,92,56,78,9,54,1,2};
    int n = sizeof(arr) / sizeof(arr[1]);
    selection_sort(arr,n);
}