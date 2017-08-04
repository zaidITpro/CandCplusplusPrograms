#include <stdio.h>
int main()
{
   int n,arr[100],i,sum=0;
 
   printf("\nEnter the total number of elements: ");
   scanf("%d",&n);
 
   printf("\nEnter the elements of the array: \n");
   for(i=0;i<n;i++)
   {
          scanf("%d",&arr[i]);
   }
 
   for(i=0;i<n;i++)
   {
          sum=sum+arr[i];
   }
 
 
   printf("\nSum of array is: %d",sum);
   printf("\n");
 
   return 0;
}