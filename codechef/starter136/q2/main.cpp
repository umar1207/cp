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
    string s; cin >> s;
    int count1 = 0;
    for(int i=0; i<4; i++){
        if(s[i] == '1') count1++;
    }

    int ans = 1;
    if (count1 == 1) ans = 11;
    else if(count1 == 3) ans = 231;
    else if(count1 == 4) ans = 441;
    else{
        if((s[0] == '1' && s[1] == '1') || (s[2] == '1' && s[3] == '1')) ans = 21;
        else ans = 121;
    }

    cout << ans << endl;
}