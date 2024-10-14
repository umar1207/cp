#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve();
int min_operations_to_unite(const string& s) {
    unordered_map<char, vector<int>> positions;
    int min_operations = INT_MAX;

    for (int i = 0; i < s.length(); ++i) {
        positions[s[i]].push_back(i);
    }

    for (const auto& char_positions : positions) {
        const vector<int>& positions_vec = char_positions.second;
        for (int i = 0; i < positions_vec.size() - 1; ++i) {
            int operations = positions_vec[i + 1] - positions_vec[i];
            min_operations = min(min_operations, operations);
        }
    }

    return min_operations;
}

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
    string s;
    cin >> s;
    int result = min_operations_to_unite(s);
    cout << result << endl;
}