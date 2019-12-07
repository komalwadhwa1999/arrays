#include<stdio.h>
#include<stdlib.h>

int * mergeArrays(int a[], int b[], int asize, int bsize) 
{
  int k=0,i=0,j=0,x=asize+bsize;
  int *arr=(int*)malloc((asize+bsize)*sizeof(int));
 
  while(i<asize && j<bsize)
  {
    if(a[i]<b[j])
      arr[k++]=a[i++];
    else
      arr[k++]=b[j++];
  }
  
  while(i<asize)
  {
    arr[k++]=a[i++];
  }
  
  while(j<bsize)
  {
    arr[k++]=b[j++];
  }
  
  return arr;
}
int main() {
  int a[100], b[100], m, n, c;

  printf("Input number of elements in first array\n");
  scanf("%d", &m);

  printf("Input %d integers\n", m);
  for (c = 0; c < m; c++) {
    scanf("%d", &a[c]);
  }

  printf("Input number of elements in second array\n");
  scanf("%d", &n);

  printf("Input %d integers\n", n);
  for (c = 0; c < n; c++) {
    scanf("%d", &b[c]);
  }
  
  int *arr=(int*)malloc((m+n)*sizeof(int));
  arr = mergeArrays(a, b, m, n);

  printf("Sorted array:\n");

  for (c = 0; c < m + n; c++) {
    printf("%d\n", arr[c]);
  }

  return 0;
}
