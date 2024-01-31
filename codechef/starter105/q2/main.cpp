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
    vector<int>vi(n,0);

    for(int &x: vi) cin >> x;

    int sum = 0;
    for(int x: vi) sum+=x;

    if(sum%n != 0)
    {
        cout << "NO\n";
        return;
    }

    int d = sum/n;

    for(int it: vi)
    {
        int a = it - d;
        if(a%2 != 0)
        {
            cout << "NO\n";
            return;
        }
    }

    // int x = sum/n;

    // for(int i=0; i<n; i++)
    // {
    //     if(sum%2 != vi[i]%n){
    //         cout << "NO" << endl;
    //         return;
    //     }
    // }
    // if(sum != x*n)
    // {
    //     cout << "NO" << endl;
    //     return;
    // }

    cout << "YES" << endl;
}