// #include<iostream>
// #include<map>
// using namespace std;

// int main() {
//     int N, A, B;
//     cin >> N;
//     cin >> A;
//     cin >> B;
//     map<int,int>mp;
//     int* numbers_on_face = new int[N];
//     for(int i=0;i<N;i++){
//         cin >> numbers_on_face[i];
//         mp[numbers_on_face[i]]++;
//     }
//     float x = float((mp[A]*mp[B]))/float((N*N));
//     cout << x;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};
    
void dfs(int x, int y, vector<vector<char>> &grid, vector<vector<bool>> &vis)
{
    vis[x][y] = true;
    // cout << "HI";
    int m = grid.size();
    int n = grid[0].size();

    for(int i=0; i<4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if((nx >= 0 && nx < n)&&(ny >= 0 && ny < m)){
        if(!vis[nx][ny] && grid[nx][ny]=='1'){
            dfs(nx, ny, grid, vis);
        }}
    }
    // cout << "\nDone ";
}

int numIslands(vector<vector<char>>&grid)
{
    int count = 0;
    int m = grid.size();
    int n = grid[0].size();
    // cout << "m = " << m << "\n" << "n = " << n << endl;
    vector<vector<bool>> vis(m, vector<bool>(n, false));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!vis[i][j] && grid[i][j] == '1')
            {
                
                dfs(i, j, grid, vis);
                count++;
                cout << "count = " << count << endl;
            }
        }
    }
    return count;
}

int main()
{
    int m;
    cin >> m;
    int n;
    cin >> n;
    vector<vector<char>> grid(m, vector<char>(n, '0'));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) cin >> grid[i][j];
    }


    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++){
    //         cout << grid[i][j] << " ";
    //     } 
    //     cout << endl;
    // }

    cout << numIslands(grid) << endl;
}