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
    ll nsq = n*n;
    ll o = (nsq&1) ? nsq : nsq-1;
    ll odd = 1;
    ll even = 2;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(odd <= o)
            {
                cout << odd << " ";
                odd+=2;
            }
            else
            {
                cout << even << " ";
                even+=2;
            }
        }
        cout << "\n";
    }
}