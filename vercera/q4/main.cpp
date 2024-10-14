#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    stack<char>st;
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '(')
        {   
            st.push(s[i]);
            count ++;
        }
        else if(count > 0 && s[i] == ')')
        {
            count --;
            while(st.top() != '(')
            {
                st.pop();
            }
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    // whatever remains in stack store it as a string 
    string ans = "";
    while(!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}