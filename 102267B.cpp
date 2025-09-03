#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

bool isPrime(int n){
    if (n == 0 || n == 1) return false;

    for (int i = 2; i*i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }

    return true;
}

int32_t main() {
    fastio;

    int n;
    cin >> n;

    if (isPrime(n-2)){
        cout << "2 " << n-2 << "\n";
    } else {
        cout << "-1\n";
    }

    return 0;
}