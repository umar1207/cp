// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// void solve();

// int main()
// {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("error.txt", "w", stderr);
//         freopen("output.txt", "w", stdout);
//     #endif
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         solve();
//     }
//     cerr << "time taken: " << (float)clock() / CLOCKS_PER_SEC << " secs"  << endl;
//     return 0;
// }

// int ans(int x, int y, int k)
// {
//    for(int i=0; i<k; i++)
//    {
//     if(x>y) x = gcd(x,y);
//     else y = gcd(x,y);

//     if(x>y) x = lcm(x,y);
//     else y = lcm(x,y);

//     if(x==y) break;
//     // cout << x << " " << y << endl;
//    }

//     return x+y;
// }

// void solve()
// {
//     int x, y, k;
//     cin >> x >> y >> k;
//     cout << ans(x,y,k) << endl;
// }

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
    vector<ll>v(n);
    for(ll &x : v) cin >> x;

    int maxInd = 0;
    ll maxE = v[0];
    for(int i=0; i<n; i++)
    {
        maxE = max(maxE, v[i]);
        if(maxE == v[i]) maxInd = i;
    }

    ll prev = v[0];
    for(int i=0; i<maxInd; i++)
    {
        if(v[i] < prev) v[i] = prev;
        else prev = v[i];
    }

    prev = v[n-1];
    for(int i=n-1; i>maxInd; i--)
    {
        if(v[i] < prev) v[i] = prev;
        else prev = v[i];
    }

    ll sum = 0;
    for(ll x: v)
    {
        sum += x;
    }

    cout << sum << endl;
}