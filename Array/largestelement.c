#include <stdio.h>
int main()
{
   int n,arr[100],largest=0,i;
 
   printf("\nEnter the total number of elements: ");
   scanf("%d",&n);
 
   printf("\nEnter the elements of the array: \n");
   for(i=0;i<n;i++)
   {
          scanf("%d",&arr[i]);
   }
 
   for(i=0;i<n;i++)
   {
          if(largest<arr[i])
          {
                largest=arr[i];
          }
   }
   printf("\nThe largest element of array is: %d",largest);
   printf("\n");
   return 0;
}