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
    int n; cin >>n;
    vector<int> a(n), b(n);

    for(int &i: a) cin >> i;
    for(int &i: b) cin >> i;

    if((a[0] != b[0]) || (a[n-1] != b[n-1]))
    {
        cout << "NO\n";
        return;
    }

    for(int i=0; i<n; i++)
    {
        if(a[i] == 1 && b[i] == 0) 
        {
            cout << "NO\n";
            return;
        }
    }

    int st = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(a[i]==1)
        {
            st = i;
            break;
        }
    }

    int end = INT_MIN;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]==1)
        {
            end = i;
            break;
        }
    }

    for(int i=1; i<n-1; i++)
    {
        if(a[i] == 0 && b[i] == 1)
        {
            if(st < i || end > i)
            {
                cout << "YES\n";
                return;
            }
        }
    }


    // check if they're same
    int s = 1;
    for(int i=0; i<n; i++)
    {
        if(a[i] != b[i])
        {
            s = 0;
        }
    }

    if(s)
    {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";

    // cout << endl;
}