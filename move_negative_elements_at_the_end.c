#include<stdio.h>
#include<stdlib.h>

void moveElements(int arr[], int n)
{
  int i,j;
  for(i=0;i<=n/2;i++)
  {
    for(j=0;j<n-1;j++)
    {
      if(arr[j]<0 && arr[j+1]>=0)
      {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  
  
}
int main() {
  int a[100] , n, c;

  printf("Input number of elements in array\n");
  scanf("%d", &n);

  printf("Input %d integers\n", n);
  for (c = 0; c < n; c++) {
    scanf("%d", &a[c]);
  }
    
  moveElements(a,n);
  for (c = 0; c < n; c++) {
    printf("%d ", a[c]);
  }

  return 0;
}
