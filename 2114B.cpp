#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

        int t;  
    cin >> t;  
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int a = count(s.begin(), s.end(), '0');  
        int b = n - a;                           

        int min_good = abs(a - b) / 2;
        int max_good = (a / 2) + (b / 2);

        if (k >= min_good && k <= max_good && (k % 2 == min_good % 2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}