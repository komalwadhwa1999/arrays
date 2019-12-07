#include<stdio.h>

void printSpiral(int a[ROWS][COLS], int r, int c)
{
  int i,k=0,l=0;
  while(k<r && l<c)
  {
    
    for(i=l;i<c;i++)
      printf("%d\n",a[k][i]);
    k++;
    
    for(i=k;i<r;i++)
      printf("%d\n",a[i][c-1]);
    c--;
    
    if(k<r){
    for(i=c-1;i>=l;i--)
      printf("%d\n",a[r-1][i]);
    r--;
  	}
    
    if(l<c){
    for(i=r-1;i>=k;i--)
      printf("%d\n",a[i][l]);
    l++;
    }
   
  }
  
}
int main() 
{ 
    int a[R][C] = { { 1, 2, 3, 4, 5, 6 }, 
                    { 7, 8, 9, 10, 11, 12 }, 
                    { 13, 14, 15, 16, 17, 18 } }; 
  
    printSpiral(a, R, C); 
    return 0; 
} 
