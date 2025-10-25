#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;


    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long sum = 0;
        int oddCount = 0;
        int minOdd = INT_MAX;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;

            if (x % 2 == 1) { 
                oddCount++;
                minOdd = min(minOdd, x);
            }
        }

       
        if (oddCount % 2 == 1) {
            sum -= minOdd;
        }

        cout << sum << "\n";
    }

    return 0;
}