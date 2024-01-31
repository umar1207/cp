// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// int fibi(int n);
// void solve();

// int main()
// {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("error.txt", "w", stderr);
//         freopen("output.txt", "w", stdout);
//     #endif
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         solve();
//     }
//     cerr << "time taken: " << (float)clock() / CLOCKS_PER_SEC << " secs"  << endl;
//     return 0;
// }

// int fibi(int n)
// {
//     if(n==0 || n==1) return n;
//     else return (fibi(n-1) + fibi(n-2));
// }

// void solve()
// {
//     int n; cin >> n;
//     // vector<int>vi;
//     for(int i=0; i<n; i++)
//     {
//         cout << fibi(i) << " ";
//     }
//     // for(auto it: vi) cout << it << " ";
//     cout << endl;
// }

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

int cut_rod(int p[], int n)
{
    if(n==0) return 0;

    int a = INT_MIN;
    for(int i=1; i <= n; i++)
    {
        // int a = max(2,3);
        a = max(a, p[i] + cut_rod(p, n-i));
    }
    return a;
}

// length i   1 2 3 4 5 6 7 8 9 10
// price pi   1 5 8 9 10 17 17 20 24 30


void solve()
{
    int p[32];
    for(int i=0; i<32; i++) p[i] = i;
    for(int i=1; i<=31; i++)
    {
        cout << i << " = " << cut_rod(p,i) << endl;
    }
}