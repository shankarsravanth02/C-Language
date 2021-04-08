#include<stdio.h>
int main(int m[x][x])
{
  int i,j,temp;
  for(i=0;i<x;i++)
  {
       for(j=0;j<i;j++)
      {
          temp=m[i][j];
          m[i][j]=m[j][i];
          m[j][i]=temp;
      }
  }
  for(i=0;i<(x/2);i++)
  {
      for(j=0;j<x;j++)
      {
          temp=m[i][j];
          m[i][j]=m[x-1-i][j];
          m[x-1-i][j]=temp;
      }
  }
  return m;
}
