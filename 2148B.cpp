#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int t; 
    cin >> t;
    
    while (t--){
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int j = 0; j < m; j++) cin >> b[j];

        int cntH = 0, cntV = 0;
        for (int i = 0; i < n; i++) if (a[i] < y) cntH++;
        for (int j = 0; j < m; j++) if (b[j] < x) cntV++;

        cout << cntH + cntV << "\n";
    }

    return 0;
}
