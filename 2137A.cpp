#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int t;
    cin >> t;

    while (t--){
        int k, x;
        cin >> k >> x;

        for (int i=0; i<k; i++) x *= 2;

        cout << x << "\n";
    }

    return 0;
}