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
    int mini = INT_MAX;
    vector<int>vi(n);
    for(int &i: vi)
    {
        cin >> i;
        mini = min(mini,i);
    }
    int ct = 0;
    for(int i: vi)
    {
        if(i==mini) ct++;
    }
    cout << n-ct << endl;

}