#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
  int n;
  printf("\nEnter the number of vertices: \n");
  scanf("%d",&n);
 
  std::vector< pair<int,int> > adj_list[n+1];
  std::vector< pair<int,int> >::iterator it;
  int destination,weight;
 
  for(int i=1;i<=n;i++)
  {
     int edges;
          printf("\n\nEnter the number of edges from vertex %d: ",i);
          scanf("%d",&edges);
          if(edges!=0)
          {
             for(int j=1;j<=edges;j++)
             {
                printf("\nEnter the destination and weight of edge %d: ",j);
                {
                  scanf("%d%d",&destination,&weight);
                  adj_list[i].push_back(make_pair(destination,weight));
 
                }
             }
          }
  }
 
  /* Printing implemented Graph */
 
  printf("\n\nImplemented Graph is: \n");
 
  for(int i=1;i<=n;i++)
  {
      printf("\n\n");
      for(it=adj_list[i].begin();it!=adj_list[i].end();it++)
      {
            destination=it->first;
            weight=it->second;
                 printf("\nNode %d is connected to Node %d with weight = %d",i,destination,weight);
      }
  }
 
     return 0;
}