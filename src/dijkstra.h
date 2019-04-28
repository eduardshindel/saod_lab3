#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "graph.h"
#include "heap.h"

void ShortestPathDijkstra(struct graph *g, int src, int *d, int *prev);
int RecoveryPath(struct graph *g, int src, int dst, int *prev, int *path);

#endif
