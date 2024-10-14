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
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    cerr << "time taken: " << (float)clock() / CLOCKS_PER_SEC << " secs"  << endl;
    return 0;
}
void solve()
{
    int n; cin >> n;
    vector<int>arr(n,0); 
    for(int &x: arr) cin >> x; 

    int dp[n][n];

    int size = 0;
    int evenSum = INT_MIN;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(i==j) dp[i][j] = arr[i];
            else{
                dp[i][j] = dp[i][j-1] + arr[j];
            }

            if(dp[i][j]%2==0 && (j-i+1)>size)
            {
                size = (j-i+1);
            }
        }
    }

    cout << size << endl;
}