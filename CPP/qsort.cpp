#include<iostream>
#include<cstdlib>

int comp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
  int arr[] = {7,9,3,6,8,2,34,5,7,9,0};
  int n = sizeof(arr) / sizeof(arr[0]);
  qsort(arr,n,sizeof(int),comp);\

  for(int i =0 ; i < n ; i++)
  {
    std::cout<<arr[i]<<std::endl;
  }
}