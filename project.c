#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct {
    int vertices;
    int **adjMatrix;
} Graph;

// Create Graph
Graph* createGraph(int v) {
    Graph* g = (Graph*)malloc(sizeof(Graph));
    g->vertices = v;

    g->adjMatrix = (int**)malloc(v * sizeof(int*));

    for(int i = 0; i < v; i++) {
        g->adjMatrix[i] = (int*)malloc(v * sizeof(int));
        for(int j = 0; j < v; j++)
            g->adjMatrix[i][j] = 0;
    }
    return g;
}

// Add Edge (Create)
void addEdge(Graph* g, int src, int dest, int weight) {
    g->adjMatrix[src][dest] = weight;
    g->adjMatrix[dest][src] = weight;
}

// Display Graph (Read)
void displayGraph(Graph* g) {
    printf("\nAdjacency Matrix:\n");
    for(int i = 0; i < g->vertices; i++) {
        for(int j = 0; j < g->vertices; j++) {
            printf("%d ", g->adjMatrix[i][j]);
        }
        printf("\n");
    }
}

// Update Edge
void updateEdge(Graph* g, int src, int dest, int newWeight) {
    if(g->adjMatrix[src][dest] != 0) {
        g->adjMatrix[src][dest] = newWeight;
        g->adjMatrix[dest][src] = newWeight;
        printf("Updated successfully!\n");
    } else {
        printf("No route exists!\n");
    }
}

// Delete Edge
void deleteEdge(Graph* g, int src, int dest) {
    g->adjMatrix[src][dest] = 0;
    g->adjMatrix[dest][src] = 0;
    printf("Route deleted!\n");
}

// Search
void searchEdge(Graph* g, int src, int dest) {
    if(g->adjMatrix[src][dest] != 0)
        printf("Route exists with relief amount: %d\n", g->adjMatrix[src][dest]);
    else
        printf("No route found!\n");
}

int main() {
    int choice, v, src, dest, weight;

    printf("Enter number of locations: ");
    scanf("%d", &v);

    Graph* g = createGraph(v);

    while(1) {
        printf("\n--- Relief Distribution Menu ---\n");
        printf("1. Add Route\n");
        printf("2. Delete Route\n");
        printf("3. Update Route\n");
        printf("4. Search Route\n");
        printf("5. Display Graph\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter source, destination, relief amount: ");
                scanf("%d %d %d", &src, &dest, &weight);
                addEdge(g, src, dest, weight);
                break;

            case 2:
                printf("Enter source and destination: ");
                scanf("%d %d", &src, &dest);
                deleteEdge(g, src, dest);
                break;

            case 3:
                printf("Enter source, destination, new relief amount: ");
                scanf("%d %d %d", &src, &dest, &weight);
                updateEdge(g, src, dest, weight);
                break;

            case 4:
                printf("Enter source and destination: ");
                scanf("%d %d", &src, &dest);
                searchEdge(g, src, dest);
                break;

            case 5:
                displayGraph(g);
                break;

            case 6:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }
}