#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int t;
    cin >> t;

    while (t--){
        int x, n;
        cin >> x >> n;

        if (n % 2 == 0) cout << 0 << "\n";
        else cout << x << "\n";

    }


    return 0;
}