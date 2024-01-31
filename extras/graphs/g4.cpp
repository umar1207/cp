// DFS
// Depth First Search

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

vi adj[10];
vi visited(10,0);
vi ans;

// recursive solution
void DFS(int node)
{
    visited[node] = 1;
    ans.push_back(node);
    for(auto it: adj[node])
    {
        if(!visited[it]) DFS(it);
    }
}

int main()
{

    adj[1].push_back(2);
    adj[1].push_back(6);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(2);
    adj[4].push_back(2);
    adj[4].push_back(5);
    adj[5].push_back(4);
    adj[5].push_back(8);
    adj[6].push_back(1);
    adj[6].push_back(7);
    adj[6].push_back(9);
    adj[7].push_back(6);
    adj[7].push_back(8);
    adj[8].push_back(5);
    adj[8].push_back(7);
    adj[9].push_back(6);

    DFS(1);

    for(auto it: ans) cout << it << " ";

}