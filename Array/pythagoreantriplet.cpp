#include <iostream>
#include <stdio.h>
using namespace std;
bool check(int arr[],int n);
int main() {
  
     int n,arr[100];
        printf("\nEnter the number of elements in array: ");
     scanf("%d",&n);
 
        printf("\nEnter the elements of array: \n");
     for(int j=0;j<n;j++)
     {
         scanf("%d",&arr[j]);
     }
     if(check(arr,n))
     {
            printf("\n");
         printf("Yes");
     }
     else
     {  
            printf("\n");
         printf("No");
     }
     printf("\n");
  
 return 0;
}
bool check(int arr[],int n)
{
     for(int i=0;i<n;i++)
     {
         arr[i]=arr[i]*arr[i];
     }
     int key,j;
     for(int i=1;i<n;i++)
     {
         key=arr[i];
         j=i-1;
         while(arr[j]>key && j>=0)
         {
             arr[j+1]=arr[j];
             j=j-1;
         }
         arr[j+1]=key;
     }
     for(int i=n-1;i>=2;i--)
     {
         int a=arr[i];
         j=0;
         int k=i-1;
         while(j<k)
         {
             if(arr[j]+arr[k]==a)
             {
                 return true;
             }
             else if(arr[j]+arr[k]>a)
             {
                 k--;
             }
             else if(arr[j]+arr[k]<a)
             {
                 j++;
             }
         }
     }
     return false;
}