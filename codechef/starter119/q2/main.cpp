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
    int n; int k;
    cin >> n >> k;
    vector<int>vi(n,0);
    for(int &x: vi) cin >> x;

    int fl = 0;
    int ans = __INT_MAX__;
    for(int x: vi)
    {
        if(x >= k)
        {
            fl=1;
            ans = min(ans, x - ((x/k) * k));
        }
    }
    if(fl) cout << ans << endl;
    else cout << -1 << endl;
}