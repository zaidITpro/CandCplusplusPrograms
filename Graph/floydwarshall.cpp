#include <iostream>
#include <stdio.h>
using namespace std;
 
class graph
{
   int adjacency[10][10],distance[10][10],n,i,j,k;
   public:
        void get_data();
        void floydwarshall();
        void print();
};
 
void graph::get_data()
{
  printf("\nEnter the total number of vertices: ");
  scanf("%d",&n);
  printf("\nEnter the adjacency matrix (If there is no \nedge betweent two vertex then enter 1000): \n\n");
  for(i=1;i<=n;i++)
  {
       for(j=1;j<=n;j++)
       {
             scanf("%d",&adjacency[i][j]);
       }
  }
}
 
void graph::floydwarshall()
{
  
   for(i=1;i<=n;i++)
   {
        for(j=1;j<=n;j++)
        {
             distance[i][j]=adjacency[i][j];
        }
   }
 
   /* Updating distance matrix by taking intermediate vertex 'k'
      between every other vertices pair */
 
   for(k=1;k<=n;k++)
   {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(distance[i][k]+distance[k][j]<distance[i][j])
                {
                      distance[i][j]=distance[i][k]+distance[k][j];
                }
            }
        }
   }
}
void graph::print()
{
  
  printf("\n\nThe final distance matrix is: \n\n");
  for(i=1;i<=n;i++)
  {
      for(j=1;j<=n;j++)
      {
          printf("%d\t\t",distance[i][j]);
      }
      printf("\n");
  }
}
 
int main()
{
  graph graph;
  graph.get_data();
  graph.floydwarshall();
  graph.print();
  return 0;
}