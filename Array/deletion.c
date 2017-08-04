#include <stdio.h>
 
#define MAX 100
 
int array[MAX],n;
 
int delete();
 
void print();
 
int main()
 
{
 
  int i,deleted;
 
  printf("\nEnter the total number of elements: ");
 
  scanf("%d",&n);
 
  printf("\nEnter the elements of array:\n ");
 
  for(i=0;i<n;i++)
 
  {
 
      scanf("%d",&array[i]);
 
  }
 
  print();
 
  deleted=delete();
 
  print();
 
  printf("\nDeleted item is: %d",deleted);
 
         printf("\n");
 
  return 0;
 
}
 
void print()
 
{
 
 int i;
 
 printf("\n\nThe updated array is: \n");
 
 for(i=0;i<n;i++)
 
 {
 
           printf("%d ",array[i]);
 
 }
 
}
 
int delete()
 
{
 
 int item,i,j;
 
 printf("\nEnter the element you want to delete from the array: ");
 
 scanf("%d",&item);
 
 for(i=0;i<n;i++)
 
 {
 
         if(array[i]==item)
 
         {
 
             for(j=i;j<n;j++)
 
             {
 
                   array[j]=array[j+1];
 
             }
 
             n=n-1;
 
             break;
 
         }
 
 }
 
 return item;
 
}