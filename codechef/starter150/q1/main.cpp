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
int f(int s, int l){
    if(s*2 <= l) return 0;
    return 1 + min(
        f(s-1,l),f(s,l+1)
    );
}
void solve()
{
    int x, y; cin >> x >> y;
    int smaller = x, larger = y;
    if(x>y){
        smaller = y;
        larger = x;
    }
    cout << f(smaller,larger) << endl;

}