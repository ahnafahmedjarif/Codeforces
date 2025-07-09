#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int n;
    cin >> n;

    int cnt_room = 0;
    for (int i=0; i<n; i++){
        int p, q;
        cin >> p >> q;

        if (abs(p - q) >= 2){
            cnt_room++;
        }

    }

    cout << cnt_room << "\n";

    return 0;
}