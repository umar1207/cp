#include<bits/stdc++.h>
using namespace std;

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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int x=1;
    while(1)
    {
        if((a+x)%b == (c+x)%d) break;
        else x++;
    }

    cout << x << endl;
}