#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve();

int main()
{
    // ios_base :: sync_with_stdio(false);
    // cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("error.txt", "w", stderr);
    //     freopen("output.txt", "w", stdout);
    // #endif
    //     solve();
    // cerr << "time taken: " << (float)clock() / CLOCKS_PER_SEC << " secs"  << endl;
    solve();
    return 0;
}

bool isPal(string s)
{
    map<char,int>mp;
    for(auto it: s) mp[it]++;

    if(!(s.length()&1))
    {
        for(auto it: mp)
        {
            if(it.second&1) return false;
        }
        return true;
    }
    else
    {
        int fl = 0;
        for(auto it: mp)
        {
            if(it.second&1)
            {
                fl++;
            }
        }
        if(fl==1) return true;
        else return false;
    }
}

string pal(string s)
{
    // creating a map for the strings
    map<char,int>mp;
    for(int i=0;i<s.length();i++) mp[s[i]]++;

    char mid = '#';
    if(s.length()&1)
    {
        for(auto it: mp)
        {
            if(it.second&1)
            {
                mid = it.first;
                it.second--;
            }
        }
    }

    //half the frequency
    for(auto it=mp.begin();it!=mp.end();it++) it->second/=2;

    typedef pair<char,int> dt;
    priority_queue <dt, vector<dt>, greater<dt>> pq;

    for(auto it: mp)
    {
        pq.push(make_pair(it.first, it.second));
    }

    string ans = "";
    while(pq.size())
    {
        if(pq.top().second > 0)
        {
            char c = pq.top().first;
            int i = pq.top().second;
            ans += c;
            i--;
            pq.pop();
            pq.push(make_pair(c,i));
        }
        else pq.pop();
    }

    string rev = "";
    for(int i=ans.length()-1; i>=0; i--)
    {
        rev += ans[i];
    }

    if(mid == '#') ans+=rev;
    else ans = ans + mid + rev;

    return ans;
}


void solve()
{
    string s; cin >> s;
    if(!isPal(s)) cout << -1 << endl;
    else
    {
        cout << pal(s) << endl;
    }
}