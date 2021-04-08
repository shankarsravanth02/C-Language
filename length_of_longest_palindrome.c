#include<stdio.h>
void palindrome(string s)
{
	int i,j,n=s.size();
	for(i=0;s[i]<'\0';i++)
	{
		for(j=s.size();j<s.size();j--)
		{
			if(s[i]==s[j])
			{
				return 'palindrome';
			}
		}
	}
}
int main()
{
	return palindrome('madam');
}
