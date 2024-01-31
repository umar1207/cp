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

    ll arr[n];
    unordered_map<int,int> mp;

    for(int i=1; i<=n; i++) mp[i] = 0;

    for(int i=0; i<n; i++) 
    {
        cin >> arr[i];
        if(arr[i] <= n && arr[i] > 0) mp[arr[i]]++;
    }

    ll ans = 0;
    ll x = 1;
    for(int i=1; i<=n; i++)
    {
        if(mp[i] == 0) break;
        else
        {
            ans = (ans + x*mp[i])%1000000007;
            x = x*mp[i]%1000000007;
        }
    }
    cout << ans << endl;
}