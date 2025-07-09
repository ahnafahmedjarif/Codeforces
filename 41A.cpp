#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    string s, t;
    cin >> s >> t;

    int left = 0, right = s.length()-1;

    while (left < right){
        swap(s[left], s[right]);
        left++;
        right--;
    }

    if (s == t) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}