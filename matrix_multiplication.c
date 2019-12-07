#include <stdio.h>
/* Include other headers as needed */
int main()
{

  int i,j,k,x;
  int a[100][100],b[100][100],t;
  int r,c;    //r and c denotes to rows and columns of matrix1 i.e.a[][]
  int rr,cc;  //rr and cc denotes to rows and columns of matrix2 i.e.b[][]
  scanf("%d",&t);
  for(x=0;x<t;x++)
  {
    scanf("%d",&r);
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    scanf("%d",&rr);
    scanf("%d",&cc);
    for(i=0;i<rr;i++)
    {
      for(j=0;j<cc;j++)
      {
        scanf("%d",&b[i][j]);
      }
    }
    int arr[100][100];
    for(i=0;i<r;i++)
    {
      for(j=0;j<cc;j++)
      {
        arr[i][j]=0;
        for(k=0;k<rr;k++)
        arr[i][j]+=a[i][k]*b[k][j];
      }
    }
    for(i=0;i<r;i++)
    {
      for(j=0;j<cc;j++)
      {
        printf("%d ",arr[i][j]);
      }
      printf("\n");
    }
  }
    return 0;
}
