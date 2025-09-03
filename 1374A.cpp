#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

void solve(){
    int x, y, n;
    cin >> x >> y >> n;

    int k = (n / x) * x;
    k += y;

    if (k > n){
        k -= x;
    }

    cout << k << "\n";

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