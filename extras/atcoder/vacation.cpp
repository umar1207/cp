#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve();

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr);
        freopen("output.txt", "w", stdout);
    #endif
    int t = 1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    cerr << "time taken: " << (float)clock() / CLOCKS_PER_SEC << " secs"  << endl;
    return 0;
}

int f(int i, int k, vector<vector<int>> &h, vector<vector<int>> &dp)
{
    if(i == 0) {
        int maxi = 0;
        for(int j=1; j<4; j++){
            if(j != k) maxi = max(maxi,h[0][j-1]);
        }
        return maxi;
    }

    if(dp[i][k] != -1) return dp[i][k];

    int maxi = 0;
    for(int j=1; j<4; j++){
        if(j != k) maxi = max(maxi,h[i][j-1]+f(i-1,j,h,dp));
    }
    return dp[i][k] = maxi;
}
void solve()
{   
    int n; cin >> n;
    vector<vector<int>> h(n, vector<int>(3, 0));
    // take input in h
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> h[i][j];
        }
    }

    vector<vector<int>> dp(n, vector<int>(4, -1));
    cout << f(n-1,0,h,dp);
}