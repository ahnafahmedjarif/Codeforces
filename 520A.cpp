#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int n; cin >> n;
    string str; cin >> str;

    set<char> letters;

    for (auto c: str){
        letters.insert(tolower(c));
    }

    if (letters.size() == 26) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}