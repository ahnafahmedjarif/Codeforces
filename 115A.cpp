#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int n;
    cin >> n;

    int current = 0;
    int max_capacity = 0;

    for (int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;

        current -= a;
        current += b;

        if (current > max_capacity) {
            max_capacity = current;
        }

    }

    cout << max_capacity << "\n";

    return 0;
}