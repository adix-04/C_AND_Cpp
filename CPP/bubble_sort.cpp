/**
 * C++ code to show working of bubblsort in a int array
 */
#include<iostream>
using namespace std;

int sort_arr(int arr[],int n)
{
    int temp ;
    for (int i =0 ; i < n ; i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int k = 0;k < n; k++)
    {
        cout<<arr[k]<<endl;
    }
    return 0;
}

int main(){
    int arr[] = {10,3,4,2,2,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort_arr(arr,n);
    return 0;
}