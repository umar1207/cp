// representation of graphs
// adjacency lists

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> adj[n+1];

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);  // edge from u to v

        // adj[v].push_back(u); 
        // uncomment the above line for undirected graph
    }

    for(int i=0; i<n+1; i++){
        cout << i << " -> ";
        for(int j=0; j< adj[i].size(); j++){
            cout << adj[i][j] << " ";
        }

        cout << endl;
    }
}