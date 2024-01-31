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
    
    solve();
    
    cerr << "time taken: " << (float)clock() / CLOCKS_PER_SEC << " secs"  << endl;
    return 0;
}
void solve()
{
    int n; cin >> n;

    vector<string>s(n);
    map<string,int>mp;
    for(int i=0; i<n; i++){
        cin >> s[i];
        mp[s[i]] = 0;
    }

    string ans="";

    for(int i=n-1; i>=0; i--)
    {
        if(mp[s[i]] == 0){
            int len = s[i].length();
            string temp = s[i].substr(len-2,3);
            ans += temp;
        }else{
            ans = ans;
        }
        mp[s[i]] = 1;
    }

    cout << ans << endl;
}
