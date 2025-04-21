#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100  // Maximum number of vertices in the graph
#define INF 99999         // A value representing infinity (no edge)

void initializeMatrix(int matrix[MAX_VERTICES][MAX_VERTICES], int vertices) {
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            if (i == j) {
                matrix[i][j] = 0;  // Distance to self is 0
            } else {
                matrix[i][j] = INF;  // No edge initially
            }
        }
    }
}

void addEdge(int matrix[MAX_VERTICES][MAX_VERTICES], int u, int v, int weight) {
    matrix[u][v] = weight;  // Only one direction since the graph is directed
}

void printMatrix(int matrix[MAX_VERTICES][MAX_VERTICES], int vertices) {
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            if (matrix[i][j] == INF) {
                printf("INF ");
            } else {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int vertices, edges;
    int matrix[MAX_VERTICES][MAX_VERTICES];

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    initializeMatrix(matrix, vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    printf("Enter the edges (u v weight):\n");
    for (int i = 0; i < edges; i++) {
        int u, v, weight;
        scanf("%d %d %d", &u, &v, &weight);
        addEdge(matrix, u, v, weight);
    }

    printf("Adjacency Matrix:\n");
    printMatrix(matrix, vertices);

    return 0;
}
