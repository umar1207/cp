#include <bits/stdc++.h>

using namespace std;

void seive(int n, vector<int> &vi){
    vector<bool> isPrime(n+1,true);

    for(int i=2; i*i<=n; i++){
        if(isPrime[i]){
            for(int p=i*i; p<=n; p+=i) isPrime[p] = false;
        }
    }

    for(int i=2; i<=n+1; i++){
        if(isPrime[i]) vi.push_back(i);
    }
}

int main(){

    int n; cin >> n;

    vector<int>primes;

    seive(n,primes);

    cout << "Prime numbers in range: ";

    for(int x: primes) cout << x << " ";

    return 0;
}