#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int t;
    cin >> t;

    while (t--){
        int n, minOne = 0, step = 0;
        cin >> n;

        int nums[n];
        for (int i=0; i<n; i++) cin >> nums[i];

        for (int i=0; i<n; i++){
            if (nums[i] == 0) step++;
            if (nums[i] == -1) minOne++;
        }

        if (minOne % 2 == 1) step += 2;
        cout << step << "\n";

    }

    return 0;
}