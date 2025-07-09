#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int t;
    cin >> t;

    while (t--){
        string s;
        cin >> s;
        int year = stoi(s);

        bool isFound = false;

        for (int x = 0; x <= 99; ++x){
            if (x*x == year){
                int a = x / 2;
                int b = x - a;
                cout << a << " " << b << "\n";
                isFound = true;
                break;
            }
        }

        if (!isFound){
            cout << -1 << "\n";
        }
    }

    return 0;
}