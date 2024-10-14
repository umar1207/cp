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
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void sort(vector<int> &vi){
    int n = vi.size();
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(vi[j] > vi[j+1]) swap(vi[j], vi[j+1]);
        }
    }
}
void solve()
{
    int n; cin>>n;
    vector<int>vi(n);

    for(int &x: vi) cin >> x;

    cout << "array is: ";
    for(int x: vi) cout << x << " ";

    sort(vi);

    cout << "\nsorted array is: ";
    for(int x: vi) cout << x << " ";

    cout << endl;
}