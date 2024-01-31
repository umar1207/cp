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

int find_max(map<char,int>&mp)
{
    int max=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second > max)
        {
            max=it->second;
        }
    }
    return max;
}
void solve()
{
    int n, q;
    cin >> n >> q;

    string s; cin >> s;


    vector<char> vi(q);
    for(char &c: vi) cin >> c;

    // for(char c: vi) cout << c << " ";
    // cout << endl;

    int maxE = 1;
    int count = 1;
    for(int i=1; i<n; i++)
    {
        if(s[i] == s[i-1])
        {
            count++;
        }
        else
        {
            maxE = maxE > count? maxE : count;
            count = 1;
        }
    }
    maxE = maxE > count? maxE : count;

    cout << maxE << " ";

    int revmax = 1;
    for(int i=n-1; i>0; i--)
    {
        if(s[i] == s[i-1]) revmax++;
        else break;
    }

    // cout << revmax << " " << endl;

    char temp = s[n-1];
    int cnt = revmax;
    for(int i=0; i<q; i++)
    {
        if(vi[i] == temp)
        {
            cnt++;
            maxE = max(maxE, cnt);
        }
        else
        {
            maxE = max(maxE, cnt);
            cnt = 1;
            temp = vi[i];
        }
        cout << maxE << " ";
    }

    cout << endl;
    
}