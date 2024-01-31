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
    int n, k;
    long q;
    cin >> n >> k >> q;

    vector<long>a(n);
    for(long &x : a) cin >> x; 

    vector<int>temp;

    for(long x: a)
    {
        if(x <= q) temp.push_back(1);
        else temp.push_back(0);
    }

    int maxCount_of1 = 0;
    int ans = 0;
    for(int i=0; i<temp.size(); i++)
    {
        if(temp[i] == 1) maxCount_of1++;
        else
        {
            int N = maxCount_of1 - k + 1;
            if(N>0) ans += N*(N+1)/2;
            else ans = ans;
            maxCount_of1 = 0;
        }
    }

    if(maxCount_of1 > 0)
    {
        int N = maxCount_of1 - k + 1;
        if(N>0) ans += N*(N+1)/2;
    }

    cout << ans << endl; 
}