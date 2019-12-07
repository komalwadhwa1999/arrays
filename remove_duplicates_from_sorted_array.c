#include<stdio.h>
#include<stdlib.h>

void removeDuplicates(int *arr, int *size)
{
  for(int i=0;i<*size;i++)
  {
    for(int j=i+1;j<*size;j++)
    {
      if(arr[i]==arr[j])
      {
        for(int k=j;k<*size;k++)
        {
          arr[k]=arr[k+1];
          
        }
        j--;
        *size=*size-1;
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
    
  removeDuplicates(a,&n);
  for (c = 0; c < n; c++) {
    printf("%d\n", a[c]);
  }

  return 0;
}
