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
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int max = 0;
    for(auto it: mp)
    {
        if(it.second > max) max = it.second;
    }
    cout << n-max << endl;
}