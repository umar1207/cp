// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
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
// void solve()
// {
//     int n; cin >> n;
//     vector<int>vi(n);
//     for(int &x: vi) cin >> x;

//     if(!(n&1)){
//         cout << 2 << endl;
//         cout << 1 << " " << n << endl;
//         cout << 1 << " " << n << endl;
//     }else
//     {
//         cout << 4 << endl;
//         cout << 1 << " " << 2 << endl;
//         cout << 1 << " " << 2 << endl;
//         cout << 2 << " " << n << endl;
//         cout << 2 << " " << n << endl;
//     }
// }

#include <iostream>
using namespace std;

int main(){
    int i=0;
    while(i<1000)
    {
        int a; cin >> a;
        int b; cin >> b;
        int c = a^b;
        cout << c << endl;
    }
}