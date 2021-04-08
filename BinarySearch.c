#include<stdio.h>
int main()
{
	int array[]={25,36,14,29,17};
	int n=5;
	int m=29;
	printf(Binary_search(array,0,n-1,m));
}
void Binary_search(int a[],int i,int l,int x)
{
	int mid;
	if(l=i)
	{
		if(x==a[i])
		{
			return i;
		}
		else return 0;
    }
	else
	{
		mid=(i+l)/2;
		if(x==a[mid])
		{
			return mid;
		}
		else 
		{
		    if(x<a[mid])
		    {
			    return Binary_search(a,i,mid-1,x);
		    }
			else
			{
				return Binary_search(a,mid+1,l,x);
			}
	    }
	}
}
