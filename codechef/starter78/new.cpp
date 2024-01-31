#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<char, vector<char>, greater<char>>pq;
    pq.push('a');
    pq.push('b');
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
}