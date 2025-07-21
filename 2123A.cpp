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

        if (n % 4 == 0) cout << "Bob\n";
        else cout << "Alice\n";
    }

    return 0;
}