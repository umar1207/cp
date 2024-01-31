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
    int n, m, h;
    cin >> n >> m >> h;

    vector<int>a(n);
    vector<int>b(m);

    int ans = 0;
    for(int &x: a) cin >> x;
    for(int &x: b) cin >> x;

    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());
    
    int s = min(n,m);

    for(int i=0; i<s; i++){
        int temp = b[i]*h;
        if(temp < a[i]) ans += temp;
        else ans += a[i];
    }
    // priority_queue<int>Qen;
    // priority_queue<int>Qpo;

    // for(int i=0; i<n; i++){
    //     int x; cin >> x;
    //     Qen.push(x);
    // }
    
    // for(int i=0; i<m; i++){
    //     int x; cin >> x;
    //     Qpo.push(x);
    // }

    // int ans = 0;
    // while((Qen.size() && Qpo.size())){
    //     int temp = Qpo.top() * h;
    //     if(temp <= Qen.top()) ans += temp;
    //     else ans += Qen.top();

    //     Qen.pop();
    //     Qpo.pop();
    // }

    cout << ans << endl;
}







