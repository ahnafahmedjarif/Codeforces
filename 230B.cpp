#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

const int MAX = 10000000;

int32_t main() {
    fastio;

    vector<bool> isPrime(MAX + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }

    unordered_set<long long> primeSquares;
    for (int i = 2; i <= MAX; i++) {
        if (isPrime[i]) {
            primeSquares.insert(1LL * i * i);
        }
    }

    int n;
    cin >> n;
    while (n--) {
        long long x;
        cin >> x;

        if (primeSquares.count(x)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }


    return 0;
}