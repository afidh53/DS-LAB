#include <stdio.h>

#define MAX 30

struct edge {
    int u, v, w;
};

int parent[MAX];

int find(int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}

void union_set(int i, int j) {
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}

void kruskal(int n, int cost[MAX][MAX]) {
    int min, a, b, u, v;
    int edges = 0, total = 0;

    // Initialize parent array
    for (int i = 1; i <= n; i++)
        parent[i] = i;

    printf("\nEdges in the Minimum Spanning Tree:\n");
    while (edges < n - 1) {
        min = 9999;
        a = -1;
        b = -1;

        // Find the minimum cost edge
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (find(i) != find(j) && cost[i][j] < min) {
                    min = cost[i][j];
                    a = i;
                    b = j;
                }
            }
        }

        if (a == -1 || b == -1) break; // No more edges possible

        union_set(a, b);
        printf("%d -> %d  cost = %d\n", a, b, min);
        total += min;
        edges++;
    }

    printf("\nTotal cost of Minimum Spanning Tree = %d\n", total);
}

int main() {
    int n, cost[MAX][MAX];

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter the cost adjacency matrix (use 9999 for no edge):\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
        }
    }

    kruskal(n, cost);

    return 0;
}
