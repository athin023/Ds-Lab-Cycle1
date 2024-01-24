#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

// Function to perform Breadth-First Search traversal
void bfs(int adjacencyMatrix[MAX_NODES][MAX_NODES], int visited[MAX_NODES], int queue[MAX_NODES], int nodes, int start) {
    int front = -1, rear = -1;

    // Enqueue the starting node
    queue[++rear] = start;
    visited[start] = 1;

    while (front != rear) {
        // Dequeue a node and print it
        int current = queue[++front];
        printf("%d ", current);

        // Explore all adjacent nodes
        for (int i = 0; i < nodes; ++i) {
            if (adjacencyMatrix[current][i] == 1 && !visited[i]) {
                // Enqueue unvisited adjacent nodes
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int adjacencyMatrix[MAX_NODES][MAX_NODES];
    int visited[MAX_NODES] = {0};
    int queue[MAX_NODES];
    int nodes, startNode;

    // Input the number of nodes and the adjacency matrix
    printf("Enter the number of nodes: ");
    scanf("%d", &nodes);

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < nodes; ++i) {
        for (int j = 0; j < nodes; ++j) {
            scanf("%d", &adjacencyMatrix[i][j]);
        }
    }

    // Input the starting node for BFS
    printf("Enter the starting node for BFS: ");
    scanf("%d", &startNode);

    // Perform BFS traversal
    printf("BFS traversal starting from node %d: ", startNode);
    bfs(adjacencyMatrix, visited, queue, nodes, startNode);

    return 0;
}
