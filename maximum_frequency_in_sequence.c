#include <stdio.h>

int main()
{
  int t,n;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&n);
    int a[n],f[100];
    int c=0;
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
      f[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
      c=1;
      for(int j=i+1;j<n;j++)
      {
        if(a[i]==a[j])        
        {
          c++;
          f[j]=0;
        }
      }
      if(f[i]!=0)
      {
        f[i]=c;
      }
    }
    int max=f[0],m,i;
    for(i=0;i<n;i++)
    {
      if(f[i]>=max)
      {
        max=f[i];
        m=i;
      }
    }
    printf("%d\n",a[m]);
  }
    return 0;
}
