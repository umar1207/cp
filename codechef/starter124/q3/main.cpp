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
    vector<int>vi(n);

    for(int &x: vi) cin >> x;
    sort(vi.begin(), vi.end());
    int maxV = -1;
    for(int i=n-1; i>=0; i--)
    {
        int x = vi[i] * (n-i);
        maxV = max(maxV, x);
    }

    cout << maxV << endl;
}