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

        int move = (b - a % b) % b;
        cout << move << "\n";
    }

    return 0;
}