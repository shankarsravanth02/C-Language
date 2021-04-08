#include<stdio.h>
int main()
{
	int n,x;
	float sum;
	sum=1;
	int i;
	scanf("%d%d",&x,&n);
	int temp;
	temp=-x;
	for(i=1;i<n;i++)
	{
		sum+=(float)temp/i;
		temp*=-lx;
	}
    printf("%f",sum);
}
