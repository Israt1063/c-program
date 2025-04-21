#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100  // Maximum number of vertices in the graph

// Function to initialize the adjacency matrix
void initializeMatrix(int matrix[MAX_VERTICES][MAX_VERTICES], int vertices) {
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            matrix[i][j] = 0;  // No edges initially
        }
    }
}

// Function to add an edge to the adjacency matrix
void addEdge(int matrix[MAX_VERTICES][MAX_VERTICES], int u, int v) {
    matrix[u][v] = 1;  // Only one direction since the graph is directed
}

// Function to print the adjacency matrix
void printMatrix(int matrix[MAX_VERTICES][MAX_VERTICES], int vertices) {
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int vertices, edges;
    int matrix[MAX_VERTICES][MAX_VERTICES];

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    // Initialize the adjacency matrix
    initializeMatrix(matrix, vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    printf("Enter the edges (u v):\n");
    for (int i = 0; i < edges; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        addEdge(matrix, u, v);
    }

    // Print the adjacency matrix
    printf("Adjacency Matrix:\n");
    printMatrix(matrix, vertices);

    return 0;
}
