#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    unordered_set<int> seen;
    vector<int> result;

    for (int i = n - 1; i >= 0; i--) {
        if (seen.find(vec[i]) == seen.end()) {
            seen.insert(vec[i]);
            result.push_back(vec[i]);
        }
    }

    reverse(result.begin(), result.end());

    cout << result.size() << '\n';
    for (int val : result) cout << val << ' ';
    cout << '\n';

    return 0;
}