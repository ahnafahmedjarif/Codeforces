#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        int ans = n + (n / 2) * 2 + (n / 3) * 2;
        cout << ans << "\n";
    }

    return 0;
}