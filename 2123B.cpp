#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int t;
    cin >> t;

    while (t--){
        int n, j, k;
        cin >> n >> j >> k;

        vector<int> a(n);

        for (int i=0; i<n; i++){
            cin >> a[i];
        }

        
        if (k >= 2) cout << "YES\n";
        else{
            int max = a[0];
            for (int i=0; i<n; i++){
                if (a[i] > max) max = a[i];
            }

            if (a[j-1] == max) cout << "YES\n";
            else cout << "NO\n";

        }

    }

    return 0;
}