#include<stdio.h>
int x=4;
void display(int a[x][x])
{
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
void transpose(int a[x][x])
{
	int i,j,temp;
	for(i=0;i<x;i++)
   {
       for(j=0;j<i;j++)
       {
          temp=a[i][j];
          a[i][j]=a[j][i];
          a[j][i]=temp;
       }
   }
}
void rotation(int a[x][x])
{
	int i,j,temp;
	for(j=0;j<(x/2);j++)
   {
      for(i=0;i<x;i++)
       {
          temp=a[i][j];
          a[i][j]=a[i][x-j-1];
          a[i][x-j-1]=temp;
       }
   }
}
int main()
{
	int matrix[4][4]={{10,20,30,40},{50,60,70,80},{90,100,110,120},{130,140,150,160}};
	transpose(matrix);
	rotation(matrix);
	display(matrix);
}
