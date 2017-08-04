#include <stdio.h>
#include <unordered_map>
using namespace std;
unordered_map <int,int> map1;
unordered_map <int,int> map2;
 
int check(int n2,int arr2[]);
int main()
{
   int arr1[10],arr2[10],n1,n2;
 
   map1.reserve(10);
   map2.reserve(10);
 
   printf("\nEnter the number of elements in array 1: ");
   scanf("%d",&n1);
   printf("\nEnter the elements of array 1: \n");
   for(int i=0;i<n1;i++)
   {
        scanf("%d",&arr1[i]);
        map1[arr1[i]]++;
   }
 
   printf("\nEnter the number of elements in array 2: ");
   scanf("%d",&n2);
   printf("\nEnter the elements of array 2:\n");
   for(int i=0;i<n2;i++)
   {
        scanf("%d",&arr2[i]);
        map2[arr2[i]]++;
   }
 
   if(check(n2,arr2))
   {
        printf("\nArray 2 is an subset of Array 1\n");
   }
   else
   {
        printf("\nArray 2 is not subset of Array 1\n");
   }
   return 0;
}
int check(int n2,int array2[])
{
   for(int i=0;i<n2;i++)
   {
          if(map2[array2[i]]!=map1[array2[i]])
          {
               return 0;
          }
   }
   return 1;
}