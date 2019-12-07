#include <stdio.h>
int main()
{
  int k,t;
  int a[100][100];
  scanf("%d",&t);
  for(int k=0;k<t;k++)
  {
    int i,j;
  	
 	int y,c,x;
 	char ch;
    scanf("%d",&y);
    scanf("%d",&c);
    scanf("%d",&x);
    scanf("\n");
    scanf("%c",&ch);
    
    //counting no. of rows in res using remainder r and quotient q
    int r,res,q;
    r=y%c;
    q=y/c;
    if(r>0)
    res=q+1;
    else
      res=q;
    
    //assigning no.s to array
    int m=0;
    for(i=0;i<res;i++)
    {
      for(j=0;j<c;j++)
      {
        m=m+1;
        if(m<=y)
          a[i][j]=m;
        else
          a[i][j]=0;
      }
    }

    // printing sum according to the character entered    
    int sum=0;
    if(ch=='R')
    {
      for(i=0;i<c;i++)
      {
        sum=sum+a[x-1][i];
      }
    }
    else if(ch=='C')
    {
      for(i=0;i<res;i++)
      {
        sum=sum+a[i][x-1];
      }
    }
    printf("%d\n",sum);
    
    
  //initializing every variable and array  to zero(0)
  for(i=0;i<res;i++)
  {
    for(j=0;j<c;j++)
    {
      a[i][j]=0;
    }
  }
       res=0;c=0;sum=0;q=0;r=0;
}
    return 0;
}
