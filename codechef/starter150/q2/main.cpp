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
    int n, k; cin >> n >> k;

    vector<int>a(n,0);
    for(int &x: a) cin >> x;

    for(int i=0; i<k; i++) a[n-1] += a[i];

    for(int i=k; i<n; i++){
        cout << a[i] << " ";
    }

    cout << endl;
}