#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int t;
    cin >> t;

    while(t--){
        int x, y;
        cin >> x >> y;

        if (x-y == 1) cout << "NO\n";
        else cout << "YES\n";

    }

    return 0;
}