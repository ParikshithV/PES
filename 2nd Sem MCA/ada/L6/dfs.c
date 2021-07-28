#include<stdio.h>
#include<stdlib.h>
int DepthFirstSearch(int);
int n;
int graph[20][20], visited[10];

int DepthFirstSearch(int i)
{
    int j,count;
    printf("\n%d", i);
    visited[i] = 1;

      for(j=0;j<n;j++)
    {
        if(!visited[j] && graph[i][j] == 1)
        {
            DepthFirstSearch(j);
        }
    }

    return 0;
}

int main()
{
    int i, j,count;

    printf("\n Enter The Number Of Vertices: ");
    scanf("%d",&n);
    printf("\n Enter Adjacency Matrix In Matrix Form: \n");
  for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
               scanf("%d",&graph[i][j]);
        }
    }
   printf("Depth First Search is: \n");
   for(i=0;i<n;i++)
   {

        visited[i]=0;


    }

    DepthFirstSearch(0);
    for (i=1;i<=n;i++)
    {
      if(visited[i])
       count++;
    }
  if(count==n)
    printf("\n Graph is connected");
     else
    printf("\n Graph is not connected");

    return 0;
}
