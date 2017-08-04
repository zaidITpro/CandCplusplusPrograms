#include <stdio.h>
void wave_array(int n);
int arr[100];
int main()
{
    int n,i,j;
    printf("\nEnter the total number of elements of the array: ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
          scanf("%d",&arr[i]);
    }
    printf("\nThe original array is: \n");
    for(i=0;i<n;i++)
    {
          printf("%d ",arr[i]);
    }
    wave_array(n);
    printf("\nThe formed wave array is: \n");
    for(i=0;i<n;i++)
    {
          printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
void wave_array(int n)
{
    int i;
    int temp;
    for(i=1;i<n;i=i+2)
    {
             if(arr[i]<arr[i-1])
             {
                 temp=arr[i];
                 arr[i]=arr[i-1];
                 arr[i-1]=temp;
             }
             if(arr[i]<arr[i+1])
             {
                 temp=arr[i];
                 arr[i]=arr[i+1];
                 arr[i+1]=temp;
             }
 
 
    }
}