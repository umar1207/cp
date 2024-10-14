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

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void heapify(vector<int> &arr, int n, int i){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left<n && arr[largest] < arr[left]) largest = left;
    if(right<n && arr[largest] < arr[right]) largest = right;

    if(largest != i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void solve()
{
    int n; cin>>n;
    vector<int>arr(n);

    for(int &x: arr) cin>>x;

    for(int i=n/2-1; i>=0; i--){
        heapify(arr,n,i);
    }
    
    for(int x: arr) cout << x << " ";

    for(int i=n-1; i>0; i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }

    for(int x: arr) cout << x << " ";
    
}