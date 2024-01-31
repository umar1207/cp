#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int UL = 1e6;
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
    long long x; cin >> x;
    if(x < 2) cout << -1 << "\n";
    else
    // else if(x <= UL && x >=2)
    {
        int sq = (int)sqrt(x);
        if(x != sq*sq){
            ll a = sq;
            ll b = sq;
            ll c = x - sq*sq;
            cout << a << " " << b << " " << c << "\n";
        }
        else
        {
            sq = (int)sqrt(x-1);
            ll a = sq;
            ll b = sq;
            ll c = x - sq*sq;
            cout << a << " " << b << " " << c << "\n";
        }
        
    // }
    // else
    // {
    //     ll c = 1000000;

    //     // cout << a << " " << b << " " << c << "\n";
    }
}