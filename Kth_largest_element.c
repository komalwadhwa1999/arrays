#include<stdio.h>
int kthLargest(int arr[], int size, int k)
{
//sort in descending order
  for(int i=0;i<size;i++)
  {
    for(int j=i+1;j<size;j++)
    {
      if(arr[i]<arr[j])
      {
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
      }
    }
  }
  return arr[k];
}
int main()
{
  int k,n;
  scanf("%d",&k);
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  int element=kthLargest(a ,n , k);
  printf("Kth Largest Element = %d",element);
  return 0;
}
