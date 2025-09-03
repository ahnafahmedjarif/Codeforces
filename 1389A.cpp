#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long


void solve(int l, int r){

    long long x = l;
    long long y = 2*l;

    if (y <= r)
        cout << x << " " << y << "\n";
    
    else
        cout << "-1 -1\n";

}


int32_t main() {
    fastio;

    int t;
    cin >> t;

    while (t--){
        long long l, r;
        cin >> l >> r;

        solve(l, r);
    }

    return 0;
}