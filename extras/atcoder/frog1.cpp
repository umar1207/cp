// #include <bits/stdc++.h>
// using namespace std;

// int f(int i, int k, vector<int> &cost)
// {
//     if(i < 0) return INT_MAX;
//     if(i==0){
//         return abs(cost[i] - cost[i + k]);
//     }
//     return abs(cost[i] - cost[i + k]) + min(f(i - 1, 1, cost), f(i - 2, 2, cost));
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> cost(n, 0);
//     for (int &x : cost) cin >> x;
//     cout << f(n - 1, 0, cost);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int f(int i, int k, vector<int> &cost, vector<vector<int>> &dp)
// {
//     if (i < 0)
//         return INT_MAX;
//     if (i == 0)
//     {
//         return abs(cost[i] - cost[i + k]);
//     }

//     if (dp[i][k] != -1)
//         return dp[i][k];

//     return dp[i][k] = abs(cost[i] - cost[i + k]) + min(f(i - 1, 1, cost, dp), f(i - 2, 2, cost, dp));
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> cost(n, 0);

//     vector<vector<int>> dp(n, vector<int>(3, -1));

//     for (int &x : cost)
//         cin >> x;
//     cout << f(n - 1, 0, cost, dp);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> cost(n, 0);
    // vector<int> dp(n, 0);

    for (int i = 0; i < n; i++)
        cin >> cost[i];
        
    int sprv = 0;
    int prv = abs(cost[1] - cost[0]);

    // cout << f(n - 1, 0, cost, dp);
    
    for (int i = 2; i < n; i++)
    {
        int curr = min(prv + abs(cost[i] - cost[i - 1]), sprv + abs(cost[i] - cost[i - 2]));
        sprv = prv;
        prv = curr;
    }

    cout << prv;
    return 0;
}