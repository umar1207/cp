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
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int find_minimum_index(vector<int> &vi, int start, int end)
{
    int min = vi[start];
    int min_index = start;
    for(int i = start; i < end; i++)
    {
        if(vi[i] < min){
            min = vi[i];
            min_index = i;
        }
    }
    return min_index;
}

void solve()
{
    int n; cin >> n;
    vector<int> vi(n);
    for(int &x: vi) cin >> x;
    
    int flag = 1;
    for(int i = 0; i < n; i++)
    {
        int min_index = find_minimum_index(vi, i, n);
        if(min_index-i != 1) swap(vi[i], vi[min_index]);
        else 
        {
            flag = 0;
            break;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << vi[i] << " ";
    }
    cout << endl;
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

}