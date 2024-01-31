// BFS
// Breadth First Search 

#include<bits/stdc++.h>
using namespace std;

// void BFS(vector<int>&adj, vector<int>&visited)
// {

// }

int main()
{
    vector<int>adj[10];

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
    // adj[1] = {2,6};
    // adj[2] = {1,3,4};
    // adj[3] = {2};
    // adj[4] = {2,5};
    // adj[5] = {4,8};
    // adj[6] = {1,7,9};
    // adj[7] = {6,8};
    // adj[8] = {5,7};
    // adj[9] = {6};

    vector<int>visited(10,0);

    queue<int>q;
    vector<int> ans;

    // inserting starting node in queue
    q.push(1);
    visited[1] = 1;
    // for(int j=1; j<10; j++){
    while(!q.empty()){
        int top = q.front();
        ans.push_back(top);
        q.pop();
        // for(int i=0; i<adj[top].size(); i++)
        for(auto it: adj[top])
        {
            if(!visited[it])
            {
                q.push(it);
                visited[it] = 1;
            }
        }
    }

    // print
    for(int i=0; i < ans.size(); i++) cout << ans[i] << " ";

}