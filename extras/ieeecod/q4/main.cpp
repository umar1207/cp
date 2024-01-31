#include<bits/stdc++.h>
#include<iostream>
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

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr);
        freopen("output.txt", "w", stdout);
    #endif
    // int t;
    // cin>>t;
    // while(t--) 
    solve();
    cerr << "time taken: " << (float)clock() / CLOCKS_PER_SEC << " secs"  << endl;
    return 0;
}

int bfs()
void solve()
{
    int N, knightPosition[2], pawnPosition[2];
    cin >> N;
    for(int i=0;i<2;i++){
        cin >> knightPosition[i];
    }
    for(int i=0;i<2;i++){
        cin >> pawnPosition[i];
    }

    vector<vector<bool>>vis(n+2, vector<bool>(n+2, false));

    queue<par<int,int>>q;

    
}