#include <stdio.h>
#include <stdbool.h>

#define N 6  // number of nodes

// adjacency matrix representation of the graph
int graph[N][N] = {
  {0, 1, 1, 0, 0, 0},
  {1, 0, 0, 1, 1, 0},
  {1, 0, 0, 0, 0, 1},
  {0, 1, 0, 0, 0, 0},
  {0, 1, 0, 0, 0, 1},
  {0, 0, 1, 0, 1, 0}
};

// visited array to keep track of visited nodes
bool visited[N];

// recursive function to perform DFS on the graph
void DFS(int node) {
  // mark the current node as visited
  visited[node] = true;
  printf("%d ", node);  // print the node

  // iterate over the adjacents of the current node
  for (int i = 0; i < N; i++) {
    if (graph[node][i] && !visited[i]) {
      // if the adjacent node is not visited, recursively visit it
      DFS(i);
    }
  }
}

int main() {
  // perform DFS on the graph starting from node 0
  DFS(0);

  return 0;
}
