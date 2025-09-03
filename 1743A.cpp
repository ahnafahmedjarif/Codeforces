#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int fact(int n){
    if (n == 0 || n == 1) return 1;

    int p = 1;
    for (int i = 1; i <= n; i++){
        p *= i;
    }

    return p;
}


int ncr(int n, int r){
    if (r == 0 || r == n) return 1;
    if (r > n) return 0;

    return fact(n) / fact(r) / fact(n - r);

}

void solve(){

    int n;
    cin >> n;

    for (int i=0; i<n; i++){
        int x;
        cin >> x;
    }

    cout << ncr(10-n, 2) * ncr(4, 2) << "\n";

}

int32_t main() {
    fastio;

    int t;
    cin >> t;

    while (t--){
        solve();
    }

    return 0;
}