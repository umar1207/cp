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
    int h, x, y1, y2, k;
    cin>>h>>x>>y1>>y2>>k;

    int temp = h - y1*k;
    int ans = 0;
    if(temp < 0)
    {
        int val1 = (h%x==0) ? h/x : h/x + 1;
        int val2 = (h%y1==0) ? h/y1 : h/y1 + 1;
        ans = (val1 < val2)? val1 : val2;
    }
    else
    {
        int val1 = (h%x==0) ? h/x : h/x + 1;
        int val2 = (temp%y2==0) ? temp/y2 : temp/y2 + 1;
        val2 = k + val2;
        ans = (val1 < val2)? val1 : val2;
    }
    cout << ans << endl;
}