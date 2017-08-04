#include <stdio.h>
#define MAX 100
int bin_search(int arr[],int n,int element);
int main()
{
    int arr[MAX],n,i,element,location;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array: \n");
    for(i=0;i<n;i++)
    {
          scanf("%d",&arr[i]);
    }
    printf("\nEnter the element you want to search in the array: ");
    scanf("%d",&element);
       location=bin_search(arr,n,element);
       if(location==-1)
       {
             printf("\nElement is not present in the array !");
       }
       else
       {
             printf("\nElement %d is present at index %d",element,location);
       }
       return 0;
}
int bin_search(int arr[],int n,int element)
{
    int beg=0,mid,end=n-1;
    mid=(beg+end)/2;
    if(element>arr[end] || element<arr[beg])
    {
          return -1;
    }
    while(beg<=end)
    {
            if(arr[mid]==element)
            {
                   return mid;
            }
            else
            {
                   if(arr[mid]>element)
                   {
                        end=mid-1;
                   }
                   else
                   {
                        beg=mid+1;
                   }
                   mid=(beg+end)/2;
            }
    }
    return -1;
}