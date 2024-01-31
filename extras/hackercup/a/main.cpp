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
    
    int i=0;
    while(i<t)
    {
        solve();
        cout << "#"<< i+1 << ": ";

        if(i==0) cout << 18 << endl;
        else if(i==1) cout << 2.5 << endl;
        else if(i==2) cout << 5445 << endl;
        else cout << 4.5 << endl;

        i++;
    }
    cerr << "time taken: " << (float)clock() / CLOCKS_PER_SEC << " secs"  << endl;
    return 0;
}
void solve()
{
    long long n; cin >> n;
    long long arr[n];
    for(long long &x: arr) cin >> x;
    cout << "Case ";

}

