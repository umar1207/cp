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

    vector<int>v(n);
    priority_queue<int>pq;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        pq.push(v[i]);
    }

    int l = pq.top();
    pq.pop();
    int sl = pq.top();
    // int l=1, sl=2;

    int count = 0;

    if(l == sl)
    {
        for(int x : v)
        {
            if(x == l) count++;
        }
        if(count > (n+1)/2) cout << "NO\n";
        else cout << "YES\n";
    }
    else
    {
        for(int x : v)
        {
            if(x == sl) count++;
        }
        if(count >= (n-1)) cout << "NO\n";
        else cout << "YES\n";
    }
}