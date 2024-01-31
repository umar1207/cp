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
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int temp = -1;
    int ind = -1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > temp)
        {
            temp = a[i];
            ind = i;
        }
    }

    vector<int>ans(n);
    for(int i=0; i < n; i++)
    {
        ans[i] = n - a[i] + 1;
    }

    if(!(n&1)) 
    {
        for(int i=0; i < n; i++)
        {
            ans[i] = n - a[i];
        }
        ans[ind] = a[ind];
    }
    else
    {
        for(int i=0; i < n; i++)
        {
            ans[i] = n - a[i] + 1;
        }
    }

    if(n==1 || n==2) cout << -1 << endl;
    else
    {
        for(int i=0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}