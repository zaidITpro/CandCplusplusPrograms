#include <stdio.h>
#define MAX 100000
void rotate(int arr[],int n);
int main()
{
   int n,array[MAX],r;
 
   printf("\nEnter the number of elements in array: ");
   scanf("%d",&n);
   printf("\nEnter the elements of the array: \n");
   for(int j=0;j<n;j++)
   {
         scanf("%d",&array[j]);
   }
 
      printf("\nEnter the number of elements by which you want to rotate array: ");
      scanf("%d",&r);
   for(int j=1;j<=r;j++)
   {
         rotate(array,n);
   }
 
      printf("\n\nArray after rotation: \n");
   for(int j=0;j<n;j++)
   {
         printf("%d ",array[j]);
   }
   return 0;
}
void rotate(int arr[],int n)
{
   int temp=arr[0];
   int i;
   for(i=0;i<n-1;i++)
   {
       arr[i]=arr[i+1];
   }
   arr[i]=temp;
}