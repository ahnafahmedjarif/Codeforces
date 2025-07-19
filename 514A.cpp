#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    string x;
    cin >> x;

    string ans = "";

    for (int i=0; i<x.length(); i++){
        char ch = x[i];
        int y = ch - '0';
        int inverted = 9-y;
        ans += min(y, inverted) + '0';
    }

    if (ans[0] == '0'){
        ans[0] = '9';
    }

    cout << ans << "\n";

    return 0;
}