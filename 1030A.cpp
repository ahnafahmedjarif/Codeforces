#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int n;
    cin >> n;

    vector<int> opinion(n);

    for (int i=0; i<n; i++){
        cin >> opinion[i];
    }

    int cnt = 0;
    for (int val: opinion){
        if (val == 1) cnt++;
    }

    if (cnt > 0) cout << "HARD\n";
    else cout << "EASY\n";

    return 0;
}