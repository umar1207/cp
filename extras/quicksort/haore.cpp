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
    int pivot = arr[low];
    int i = low - 1, j = high + 1;

    while (true) {
      
        // Find leftmost element greater than or
        // equal to pivot
        do {
            i++;
        } while (arr[i] < pivot);

        // Find rightmost element smaller than 
        // or equal to pivot
        do {
            j--;
        } while (arr[j] > pivot);

        // If two pointers met.
        if (i >= j)
            return j;

        swap(arr[i], arr[j]);
    }
}
void quickSort(vector<int>&arr, int low, int high)
{
    if(low < high){
        int pivot = partition(arr,low,high);
        quickSort(arr, low, pivot);
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