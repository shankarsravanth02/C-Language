#include <stdio.h> 
#include <string.h> 
#include <stdbool.h> 
bool Palindrome_recursion(char str[],int first, int last) 
{ 
    if (first == last) 
    return true; 
    if (str[first] != str[last]) 
    return false;
    if (first < last + 1) 
    return Palindrome_recursion(str, first + 1, last - 1); 
    return true; 
}
bool isPalindrome(char str[]) 
{ 
    int n = strlen(str); 
    if (n == 0) 
        return true;
    return Palindrome_recursion(str, 0, n - 1); 
}
int main() 
{ 
    char str[20];
    printf("Enter word:");
	scanf("%s",&str[20]) ;
    if (isPalindrome(str)) 
        printf("given word is palindrome"); 
    else
        printf("given word is not a palindrome"); 
    return 0;
}
