#include <stdio.h>
#include <stdlib.h>
int merge(int n1,int n2);
int arr1[100],arr2[100],arr3[100];
int main()
{
   int n1,n2,n,i;
   printf("\nEnter the total number of elements of array 1: ");
   scanf("%d",&n1);
   printf("\nEnter the elements of array 1: \n");
   for(i=0;i<n1;i++)
   {
          scanf("%d",&arr1[i]);
   }
   printf("\nEnter the total number of elements of array 2: ");
   scanf("%d",&n2);
   printf("\nEnter the elements of array 2: \n");
   for(i=0;i<n2;i++)
   { 
             scanf("%d",&arr2[i]);
   }
   n=merge(n1,n2);
   printf("\n");
   printf("\nElement of the array after merging are:\n");
   for(i=0;i<n;i++)
   {
        printf("%d ",arr3[i]);
   }
   return 0;
}
int merge(int n1,int n2)
{
   int i,j,k,n;
   i=0;
   j=0;
   k=0;
   while(j<n1 && k<n2)
   {
          if(arr1[j]<arr2[k])
          {
                arr3[i]=arr1[j];
                i++;
                j++;
          }
          else
          {
                arr3[i]=arr2[k];
                i++;
                k++;
          }
   }
   if(j==n1)
   {
             while(k<n2)
             {
                   arr3[i]=arr2[k];
                   i++;
                   k++;
             }
   }
   else
   {
          while(j<n1)
          {
                arr3[i]=arr1[j];
                i++;
                j++;
          }
   }
   n=n1+n2;
   return n;
 
 
}