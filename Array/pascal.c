#include <stdio.h>
#include <iostream>
#define MAX 10
using namespace std;
int main()
{
      int n,i,j;
      int arr[10][10];


	  printf("\nEnter the number of rows upto which you want to generate Pascal Triangle: \n");
	  cin>>n;

	  for(i=0;i<n;i++)
	  {
	      for(j=0;j<n;j++)
	      {

	          arr[i][j]=0;
	      }
	  }

      arr[0][0]=1;

      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        {
             arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
      }
       
      for(i=0;i<n;i++)
      {
          for(j=0;j<n;j++)
          {
              printf("%d ",arr[i][j]);
          }
          printf("\n");
      }
      return 0;

}