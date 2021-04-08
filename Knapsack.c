#include<stdio.h>
int main()
{
	int i,j,k,n=7,m=15;
    int p[n],w[n],x[n];
    printf("Enter profits and weights simultaneously:");
    for (i=0,j=0;i<n,j<n;i++,j++)
    {
	    scanf("%d",&p[i]);
	    scanf("%d",&w[j]);
    }
    printf("%d",p);
    for (i=0;i<n;i++)
    {
    	x[i]==p[i]/w[i];
    	printf("%d ",x);
	}
}


