#include<stdio.h>
#include<conio.h>
int n;
int solve(int a[n])
{
    int i, j, k;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                for(k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    } 
    return a;
}
int main()
{
	int i,n=7;
	int a[]={1,3,5,0,3,5,8};
	solve(a[n]);
}
