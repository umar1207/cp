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
    int z; cin >> z;
    int p=0, n=0;
    for(int i=0; i<z; i++)
    {
        int x; cin >> x;
        if(x<0) n++;
        else p++;
    }

    // to print the max
    int j=0;
    for(int i=1; i<=p; i++)
    {
        cout << i << " ";
    }
    for(int i=p+1; i<=z ; i++)
    {
        cout << (p-1-j) << " ";
        j++;
    }
    cout << endl;

    //to print the negative number
    j=1;
    for(int i=1; i<=n; i++)
    {
        cout << 1 << " " << 0 << " ";
    }
    for(int i=n*2+1; i<=z; i++)
    {
        cout << j << " ";
        j++;
    }
    cout << endl;
}