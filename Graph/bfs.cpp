#include <stdio.h>
#include <queue>
#define MAX 100
#define visited 2
#define unvisited 1
using namespace std;
 
class bfs_traversal
{
   private:
        std::queue <int> que;
        int vertex_status[MAX],graph_matrix[MAX][MAX];
        int n;
      public:
           void get_data();
           void bfs_traverse();
};
void bfs_traversal::get_data()
{
   printf("\nEnter the total number of vertices: ");
   scanf("%d",&n);
   int max_edge=n*(n-1)/2;
   int i,source,destination;
   for(i=1;i<=max_edge;i++)
   {
            printf("\nEnter the source and destination of vertex %d and (0,0) to Exit:\n",i);
            scanf("%d%d",&source,&destination);
            if(source==0 && destination==0)
            {
                  break;
            }
            else
            {
                  graph_matrix[source][destination]=1;
                  graph_matrix[destination][source]=1;
            }
   }
}
void bfs_traversal::bfs_traverse()
{
      int i;
      for(i=1;i<=n;i++)
      {
            vertex_status[i]=unvisited;
      }
   int source;
   printf("\nEnter the source from where you want to start traversing: \n");
   scanf("%d",&source);
   printf("\n%d ",source);
   vertex_status[source]=visited;
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
             }
         }
   }
}
int main()
{
   bfs_traversal graph;
   graph.get_data();
   graph.bfs_traverse();
   return 0;
}