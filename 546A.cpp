#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    // k = he cost of the first banana
    // n = initial number of dollars the soldier has
    // w = number of bananas he wants.

    int k, n, w;
    cin >> k >> n >> w;

    int total = 0;
    for (int i=1; i<=w; i++){
        total += i*k;
    }

    int ans = total - n;

    if (ans < 0){
        cout << 0 << "\n";
    } else {
        cout << ans << "\n";
    }


    return 0;
}