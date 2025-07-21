#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int n;
    string s;

    cin >> n >> s;

    int cnt = 0;
    for (int i=1; i <= n-1; i++){
        if (s[i] == s[i-1]){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}