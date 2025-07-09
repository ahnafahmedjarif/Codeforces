#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 1)
            cout << "I hate";
        else
            cout << "I love";

        if(i == n)
            cout << " it";
        else
            cout << " that ";
    }

    return 0;
}