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
    int k; cin >> k;

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        sum += x;
    }

    if(sum < n) cout << "NO\n";
    else if(sum%n != 0 && k==0) cout << "NO\n";
    else cout << "YES\n";
}