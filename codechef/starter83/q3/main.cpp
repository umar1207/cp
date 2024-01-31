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

    vector<int>v1(n,0);
    for(int i=0; i<n; i++)
    {
        if(s[i] == '1') v1[i] = 1;
    }

    // for(int x: v1) cout << x;
    // cout << endl;

    vector<int>a0;
    vector<int>a1;

    a0.push_back(0);
    a1.push_back(1);

    for(int i=1; i<n; i++)
    {
        a0.push_back(a0[i-1]^v1[i-1]);
        a1.push_back(a1[i-1]^v1[i-1]);
    }

    // for(int x: a0) cout << x;
    // cout << endl;

    // for(int x: a1) cout << x;
    // cout << endl;


    int c0 = 0, c1 = 0;

    for(int i=0; i<n; i++)
    {
        if(a0[i] == 1) c0++;
        if(a1[i] == 1) c1++;
    }
    
    cout << max(c0,c1) << endl;
}