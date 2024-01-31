#include<bits/stdc++.h>
// #include <iostream>
using namespace std;

typedef long long ll;
void solve();

int dx[] = {-2,-2,2,2,-1,-1,1,1};
int dy[] = {-1,1,-1,1,2,-2,2,-2}; 

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("error.txt", "w", stderr);
    //     freopen("output.txt", "w", stdout);
    // #endif
    // int t;
    // cin>>t;
    // while(t--) 
    solve();
    // cerr << "time taken: " << (float)clock() / CLOCKS_PER_SEC << " secs"  << endl;
    return 0;
}

// int bfs()
void solve()
{
    int n, knightPosition[2], pawnPosition[2];
    cin >> n;
    for(int i=0;i<2;i++){
        cin >> knightPosition[i];
    }
    for(int i=0;i<2;i++){
        cin >> pawnPosition[i];
    }

    int kx = knightPosition[0];
    int ky = knightPosition[1];
    int px = pawnPosition[0];
    int py = pawnPosition[1];

    vector<vector<bool>>vis(n+1, vector<bool>(n+1, false));
    // vector<vector<int>>cb(n+2, vector<int>(n+2, 0));

    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n; j++) cb[i][j] = 1;
    // }

    int count = 0;
    int flag = 0;
    queue<pair<int,int>>q;

    q.push({kx,ky});
    vis[kx][ky] = true;

    while(!q.empty())
    {
        int tx = q.front().first;
        int ty = q.front().second;


        // if(tx == px && ty == py)
        // {
        //     flag = 1;
        //     break;
        // }
        // count++;

        q.pop();

        for(int i=0; i<8; i++)
        {
            int x = tx + dx[i];
            int y = ty + dy[i];

            if((x>=1 && x<=n)&&(y>=1 && y<=n))
            {
                if(!vis[x][y])
                {
                    vis[x][y] = true;
                    q.push({x,y});
                    count ++;
                    if(x==px && y==py)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }
        if(flag) break;
    }

    if(flag) cout << count << endl;
    else cout << "-1\n";
    
}