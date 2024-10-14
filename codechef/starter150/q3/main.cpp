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
    int n; cin>>n;
    vector<int> a(n,0);

    for(int &x: a) cin >> x;

    unordered_map<int,int>mp;
    mp[0] = 0;
    for(int x: a) mp[x]++;

    int maxNum = 0;
    int maxCount = 0;

    for(auto it: mp){
        if(it.second > maxCount){
            maxCount = it.second;
            maxNum = it.first;
        }
    }

    for(int i=0; i<n; i++){
        if(a[i] == 0) a[i] = maxNum;
    }

    int count = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1;j<n;j++){
            if(a[i] == a[j]) count++;
        }
    }

    cout << count << endl;
}