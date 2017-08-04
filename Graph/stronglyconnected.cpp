#include <stdio.h>
#include <queue>
#define MAX 100
#define visited 2
#define unvisited 1
using namespace std;
 
class bfs_traversal
{
   public:
        std::queue <int> que;
        int vertex_status[MAX],graph_matrix[MAX][MAX];
        int n,vertex_count;
      public:
           void get_data();
           bool bfs_traverse();
           void transpose();
};
void bfs_traversal::get_data()
{
   printf("\nEnter the total number of vertices: ");
   scanf("%d",&n);
   int max_edge=n*(n-1);
   int i,source,destination;
   for(i=1;i<=max_edge;i++)
   {
            printf("\nEnter the source and destination of edge %d and (0,0) to Exit:\n",i);
            scanf("%d%d",&source,&destination);
            if(source==0 && destination==0)
            {
                  break;
            }
            else
            {
                  graph_matrix[source][destination]=1;
            }
   }
}
bool bfs_traversal::bfs_traverse()
{
      /* marking all vertex unvisited */
 
      int i;
      for(i=1;i<=n;i++)
      {
            vertex_status[i]=unvisited;
      }
    
   /* starting bfs traversal from the source */
 
   int source;
   printf("\nEnter the source to start bfs: \n");
   scanf("%d",&source);
   printf("\nThe bfs traversal is: \n");
   printf("\n%d ",source);
   vertex_status[source]=visited;
   vertex_count=1;
   que.push(source);
   while(!que.empty())
   {
         source=que.front();
         que.pop();
         for(i=1;i<=n;i++)
         {
             if(graph_matrix[source][i]==1 && vertex_status[i]==unvisited)
             {
                  printf("%d ",i);
                  vertex_status[i]=visited;
                  que.push(i);
                  vertex_count++;
             }
         }
   }
 
      /* Checking if every node is visited during bfs traversal */
 
   if(vertex_count==n)
   {
        return true;
   }
   else
   {
        return false;
   }
}
void bfs_traversal::transpose()
{
   int temp;
   for(int i=1;i<=n;i++)
   {
       for(int j=i;j<=n;j++)
       {
            temp=graph_matrix[i][j];
            graph_matrix[i][j]=graph_matrix[j][i];
            graph_matrix[j][i]=temp;
       }
   }
}
 
int main()
{
   bfs_traversal graph;
   graph.get_data();
   if(graph.bfs_traverse())
   {
         graph.transpose();
         if(graph.bfs_traverse())
         {
             printf("\nGraph is Strongly Connected");
         }
         else
         {
             printf("\nGraph is not Strongly Connected");
         }
   }
   else
   {
         printf("\nGraph is not Strongly Connected");
   }
   return 0;
    
}