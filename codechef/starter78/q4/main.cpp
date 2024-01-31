// #include<bits/stdc++.h>
// using namespace std;

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
//     long long int n, x;
//     cin >> n >> x;
//     if(x < 0-(n-1) || x > n+1) cout << -1 << endl;
//     else
//     {
//         string ans="";
//         if(x>0)
//         {
//             for(int i=1; i<=(x-1); i++) ans+="+";
//             for(int i=x; i<=n; i++) ans+="*";
//         }
//         else
//         {
//             for(int i=1; i<=abs(x)+1; i++) ans+="-";
//             for(int i=abs(x)+2; i<=n; i++) ans+="*";
//         }
//         cout << ans << endl;
//     }
// }

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
//     solve();
//     cerr << "time taken: " << (float)clock() / CLOCKS_PER_SEC << " secs"  << endl;
//     return 0;
// }

// void solve()
// {
//     string s;
//     cin >> s;
//     string ans = "";

//     ll y = s.size();
//     for(ll i=0; i<y; i++)
//     {
//         if(s[i] >= 'A' && s[i] <= 'Z')
//         {
//             int let = (int)s[i];
//             let = 155-let;
//             ans += (char)let;
//         }
//         else
//         {
//             int let = (int)s[i];
//             let = 219-let;
//             ans += (char)let;
//         } 
//     }
//     cout << ans << endl;
// }