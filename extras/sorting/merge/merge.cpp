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

void merge(vector<int>&arr, int lba, int uba, int lbb, int ubb){
    int na = uba-lba+1;
    int nb = ubb-lbb+1;

    int st = lba;
    int ed = ubb;

    vector<int>c(na+nb,0);

    int i = 0;
    while(lba <= uba && lbb <= ubb){
        if(arr[lba] < arr[lbb]) c[i++] = arr[lba++];
        else c[i++] = arr[lbb++];
    }

    while(lba <= uba) c[i++] = arr[lba++];
    while(lbb <= ubb) c[i++] = arr[lbb++];

    i=0;
    for(int x = st; x <= ed; x++) arr[x] = c[i++];
}

void sort(vector<int> &vi, int l, int r){
    if (l >= r)
        return;

    int uba = (l+r) / 2;
    sort(vi, l, uba);
    sort(vi, uba+1,r);
    merge(vi, l, uba, uba+1, r);
}
void solve()
{
    int n; cin>>n;
    vector<int>vi(n);

    for(int &x: vi) cin >> x;

    cout << "array is: ";
    for(int x: vi) cout << x << " ";

    sort(vi,0,n-1);

    cout << "\narray is: ";
    for(int x: vi) cout << x << " ";

    cout << endl;
}