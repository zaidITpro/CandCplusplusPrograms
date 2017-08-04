#include <stdio.h>
#define MAX 100
int n,arr[MAX];
void insert(int item,int position);
void print();
int main()
{
      int i,item,position;
      printf("\nEnter the total number of elements: ");
      scanf("%d",&n);
      printf("\nEnter the elements of the array: \n");
      for(i=0;i<n;i++)
      {
           scanf("%d",&arr[i]);
      }
      print();
      printf("\nEnter the element you want to insert in the array: ");
      scanf("%d",&item);
      printf("\nEnter the position at which you want to insert the element: ");
      scanf("%d",&position);
      insert(item,position);
      print();
      return 0;
}
void insert(int item,int position)
{
      int i,j;
      if(position==n+1)
      {
           arr[n]=item;
      }
      else
      {
          for(i=n-1;i>=position-1;i--)
          {
               arr[i+1]=arr[i];
               if(i==position-1)
               {
                   arr[i]=item;
               }
          }
      }
      n=n+1;
}
void print()
{
      int i;
      printf("\nThe updated array is: \n");
      for(i=0;i<n;i++)
      {
           printf("%d ",arr[i]);
      }
}