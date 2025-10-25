#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int32_t main() {
    fastio;

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        ll p[n];
        for (int i=0; i<n; i++) cin >> p[i];

        for (int i=0; i<n; i++) cout << n+1-p[i] << " ";
        cout << endl;

    }

    return 0;
}