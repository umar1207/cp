#include<bits/stdc++.h>
using namespace std;

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
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout <<"\nInitial Unsorted Array is: ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int k = i-1;
        while(k>=0 && arr[k]>key)
        {
            arr[k+1] = arr[k];
            k--;
        }
        arr[k+1] = key;
        cout<<"\nIntermediate array is: ";
        for(int j=0; j<n; j++)
        {
            cout << arr[j] << " ";
        }
    }
}