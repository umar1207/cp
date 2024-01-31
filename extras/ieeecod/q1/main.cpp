#include<iostream>
using namespace std;

int main(){
    string str; cin >> str;
    int cnt = 0;
    int flag = 1;
    string ans ="";
    for(int i=0; i<str.length()-1; i++)
    {
        if(str[i] == str[i+1])
        {
            cnt++;
        }
        else
        {
            cnt++;
            if(cnt > 1) flag = 0;
            ans = ans + str[i] + to_string(cnt);
            cnt = 0;
        }
    }
    if(cnt != 0) ans = ans + str[str.length()-1] + to_string(++cnt);
    else ans = ans + str[str.length()-1] + "1";

    if(flag) cout << str;
    else cout << ans;
}