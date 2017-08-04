#include <stdio.h>
int kadane(int arr[],int n);
int main()
{
    int n,arr[100],i,result;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements of array: \n");
    for(i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }
    result=kadane(arr,n);
    printf("\nCotiguous sub-array maximum sum is: %d",result);
    return 0;
}
int kadane(int arr[],int n)
{
    int i,max_sum_so_far,max_here=0;
    max_sum_so_far=arr[0];
    for(i=0;i<n;i++)
    {
            max_here=max_here+arr[i];
            if(max_sum_so_far<max_here)
            {
                   max_sum_so_far=max_here;
            }
            if(max_here<0)
            {
                   max_here=0;
            }
    }
    return max_sum_so_far;
}