#include<stdio.h>
#include<stdio.h>
int max1, min1;
int arr[100];
void maxmin(int i, int j)
{
 int max2, min2, mid;
 if(i==j)
 {
  max1 = min1= arr[i];
 }
 else
 {
  if(i == j-1)
  {
   if(arr[i] <arr[j])
   {
    max1 = arr[j];
    min1 = arr[i];
   }
   else
   {
    max1 = arr[i];
    min1 = arr[j];
   }
  }
  else
  {
   mid = (i+j)/2;
   maxmin(i, mid);
   max2 = max1; min2 = min1;
   maxmin(mid+1, j);
   if(max1 <max2)
    max1 = max2;
   if(min1 > min2)
    min1 = min2;
  }
 }
}
int main ()
{
 int i, num;
 printf ("\n enter number of elements : ");
 scanf ("%d",&num);
 printf ("Enter the numbers : \n");
 for (i=1;i<=num;i++)
  scanf ("%d",&arr[i]);
 max1 = arr[0];
 min1 = arr[0];
 maxmin(1, num);
 printf ("Minimum element : %d\n", min1);
 printf ("Maximum element: %d\n", max1);
 return 0;
}
