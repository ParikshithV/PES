#include<stdio.h>
#define NAN 99999

#define max 10

int n=4;

void printSolution(int dist[max][max], int n);

void warshall (int graph[max][max], int n)
{
    int dist[max][max], i, j, k;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            dist[i][j] = graph[i][j];

    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    printSolution(dist, n);
}

void printSolution(int dist[max][max], int n)
{
    printf ("Shortest distances:"\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
          if (dist[i][j] == 99999)
              printf("%5s", "0");
          else
              printf ("%5d", dist[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    int graph[max][max] = { {0,   5,  NAN, 10},
                        {NAN, 0,   3, NAN},
                        {NAN, NAN, 0,   1},
                        {NAN, NAN, NAN, 0}
                      };

    int n, i, j;
    int graphh[max][max];
    printf("Enter no. of vertices:");
    scanf("%d",&n);

    printf("\nEnter graph elements: \n");
  	for(i=1;i<=n;i++)
  	{
  		for(j=1;j<=n;j++)
  		{
  			scanf("%d",&graphh[i][j]);
        if(graphh[i][j] == 99){
          graphh[i][j] = NAN;
        }
  		}
  	}

    warshall(graph, n);
    return 0;
}
