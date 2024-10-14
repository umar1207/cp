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
int partition(vector<int>&arr, int low, int high)
{
    int i = low-1;
    int pivotE = arr[high];
    for(int j=low; j<high; j++){
        if(arr[j] < pivotE){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quickSort(vector<int>&arr, int low, int high)
{
    if(low < high){
        int pivot = partition(arr,low,high);
        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1, high);
    }
}
void solve()
{
    int n; cin>>n;
    vector<int>arr(n,0);

    for(int &x : arr) cin >> x;

    quickSort(arr,0,n-1);

    for(int x: arr) cout << x << " ";
    cout << endl;

}