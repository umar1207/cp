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
    string s; cin >> s;
    string temp1 = s.substr(1,n);
    
    for(int i=0; i<n; i++)
    {
        string temp = s.substr(0, i) + s.substr(i+1, n);
        if (temp1 > temp) temp1 = temp;

    }
    cout << temp1 << endl;
}