#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << "\n";
        } else if (max(a, b) % min(a, b) == 0) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
    }

    return 0;
}