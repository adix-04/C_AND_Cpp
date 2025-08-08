/**bubble sort using C*/
#include<stdio.h>

void bubble_sort(int *arr,int n){
for(int i = 0;i < n ; i ++)
{
    for (int j = i +1 ; j < n ; j ++){
        if(arr[j] < arr[i])
        {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp ;
        }
    }
}

for(int k = 0 ; k < n ; k++){
    printf("%d\n",arr[k]);
}
}
int main()
{
    int arr[] = {12,24,56,3,23,4,56,7,89,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr,n);
}