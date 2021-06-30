#include <stdio.h>

void swap_max (int arr[],int l,int n)  {
  
  int max=arr[n];
  int pos=n;
  for (int i=n+1 ; i<l; i++)  {
    if (arr[i] > max)  {
      max = arr[i];
      pos = i;
    }
  }
  //swapping
  int temp = arr[n];
  arr[n] = max;
  arr[pos] = temp;
}
ssort (int arr[], int l)  {
  for (int i=0;i<l;i++)  {
    swap_max(arr, l, i);
  }
}
