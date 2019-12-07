#include <stdio.h>
int main()
{

  int t;
  int a[100][100];
  int b[100][100];
  scanf("%d",&t);
  while(t--)
  {
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        b[i][j]=a[j][i];
      }
    }
    for(i=0;i<n;i++)
    {
      for(j=n-1;j>0;j--)
      {
        printf("%d ",b[i][j]);
      }
      printf("%d",b[i][0]);   //no space after last element of a row
      printf("\n");
    }
    printf("\n");
  }
    return 0;
}
