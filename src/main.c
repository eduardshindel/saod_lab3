#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#include "heap.h"
#include "dijkstra.h"

int main()
{
	int i, j;

	int d[10000];
	int prev[10000];

	struct graph *g;
	g = graph_create(10000);
	i = 1;
	while (i < 10000)
	{
		if (!(i % 100))
		{
			graph_set_edge(g, i, i + 100, 30);
		}
		else if (i > 9900)
		{
			graph_set_edge(g, i, i + 1, 30);
		}
		else
		{
			graph_set_edge(g, i, i + 1, 30);
			graph_set_edge(g, i, i + 100, 30);
		}
		i++;
	}
	ShortestPathDijkstra(g, 1, d, prev);
	for (i = 1; i <= g->nvertices; i++)
	{
	printf(" %d\t", d[i]);
	}
	printf("\n");

/*	int d1[100];
	int prev1[100];
	int path1[100];

	struct graph *g1;
	g1 = graph_create(100);

	for (int i = 1; i < 100; i++)
	{
		graph_set_edge(g1, i, i + 1, 6);
	}

	ShortestPathDijkstra(g1, 1, d1, prev1);

	for (i = 1; i < g1->nvertices; i++)
	{
		printf(" %d\t", d1[i]);
	}
	printf("\n");
*/
	return 0;
}
