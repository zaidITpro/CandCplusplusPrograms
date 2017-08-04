#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int find_element(int element);
int min(int i,int j);
int binary_search(int element,int beg,int end);
int arr[MAX],n;
int main()
{
    int i,result,element;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array: \n");
    for(i=0;i<n;i++)
    {
          scanf("%d",&arr[i]);
    }
       printf("\nEnter the element you want to search: ");
       scanf("%d",&element);
       result=find_element(element);
       if(result==-1)
       {
             printf("\nElement is not present in the array !") ;
       }
       else
       {
             printf("\n\nThe element %d is present at index %d",element,result);
       }
       return 0;
}
int find_element(int element)
{
    int result;
    int i=1;
    if(arr[0]==element)
    {
          return 0;
    }
    else
    {
          while(arr[i]<=element && i<n)
          {
             i=i*2;
          }
    }
    return binary_search(element,i/2,min(i,n));
   
}
int binary_search(int element,int beg,int end)
{
       int mid;
       mid=(beg+end)/2;
    while(beg<=end)
    {
              if(arr[mid]==element)
              {
                    return mid;
              }
              else
              {
                     if(arr[mid]<element)
                     {
                             beg=mid+1;
                     }
                     else
                     {
                             end=mid-1;
                     }
                     mid=(beg+end)/2;
              }
    }
    return -1;
}
int min(int i,int j)
{
    if(j>i)
         return i;
    else
         return j;
}