// representation of graphs
// adjacency matrix

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    // n->nodes , m->edges
    int adj[n+1][m+1];

    for(int i=0; i<n+1; i++){
        for(int j=0; j<m+1; j++){
            adj[i][j] = 0;
        }
    }

    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    for(int i=0; i<n+1; i++){
        for(int j=0; j<m+1; j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}