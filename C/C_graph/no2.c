#include<stdio.h>


#define MAX 100
int visited[MAX];
void DFS(int adj[][MAX], int n, int start) {
    
    printf("Plot %d->", start);
    visited[start] = 1;

    for (int i = 0; i < n; i++) {
        if (adj[start][i] == 1 && visited[i] == 0) {
            DFS(adj, n, i);
        }
    }
}

int main() {
    int n, e;
    int adj[MAX][MAX] = {0};

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter edges (u v):\n");
    for (int i = 0; i < e; i++) {
        int u, v;
        scanf("%d %d", &u, &v);

        adj[u][v] = 1;
        adj[v][u] = 1;   // Remove for directed graph
    }

    int start;
    printf("Enter starting vertex for DFS: ");
    scanf("%d", &start);

    for (int i = 0; i < n; i++)
       visited[i] = 0;

    printf("DFS Traversal: ");
    DFS(adj, n, start);
    printf("null");

    return 0;
}