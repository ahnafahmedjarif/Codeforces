#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long


void solve(){
    string s;
    cin >> s;

    for (int i=0; i<s.length(); i++){
        if (s[i] == '1'){
            cout << "13\n";
            break;
        }

        else if (s[i] == '3'){
            cout << "31\n";
            break;
        }
    }

}

int32_t main() {
    fastio;

    int t;
    cin >> t;

    while (t--){
        solve();
    }

    return 0;
}