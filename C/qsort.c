#include<stdio.h>
#include<stdlib.h>
int comp(const void *a , const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int arr[] =  {12,4,6,78,9,7,4,2,2,1};
    int n = sizeof(arr) / sizeof(arr[1]);
    qsort(arr,n,sizeof(int),comp);
    
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}