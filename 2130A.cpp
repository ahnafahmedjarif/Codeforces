#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int T; 
    if (!(cin >> T)) return 0;

    while (T--){

        int n; cin >> n;
        int sum = 0;
        int zeros = 0;

        for (int i = 0; i < n; ++i){
            int x; cin >> x;
            sum += x;
            if (x == 0) ++zeros;
        }

        cout << (sum + zeros) << '\n';
    }
  

    return 0;
}