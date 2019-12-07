#include <stdio.h>

int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n;
    scanf("%d",&n);
    
    int a[n],i,r;
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    
    scanf("%d",&r);
    
    if(r>n)
      r=r-n;

    for(i=0;i<r;i++)
    {
      int t=a[0];
      for(int j=0;j<n-1;j++)
      {
        a[j]=a[j+1];
      }
      a[n-1]=t;
    }
    
    for(i=0;i<n-1;i++)
      printf("%d ",a[i]);
    printf("%d\n",a[n-1]);      //no space after the last element
  }
    return 0;
}
