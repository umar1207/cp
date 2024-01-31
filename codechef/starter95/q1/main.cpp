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
    vector<string>s(n);
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }

    int cA = 0, cB = 0, cAB = 0, cO = 0;
    for(string x: s)
    {
        if(x == "A") cA++;
        else if(x == "B") cB++;
        else if(x == "AB") cAB++;
        else cO = 1;
    }

    cout << cO + max(cA, cB) + cAB << endl;
}