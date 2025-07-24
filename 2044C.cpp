#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int t;
    cin >> t;

    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int row1Seated = min(a, m);
        int row2Seated = min(b, m);

        int seatedByPreference = row1Seated + row2Seated;
        int emptySeats = 2 * m - seatedByPreference;

        int flexibleSeated = min(emptySeats, c);
        int totalSeated = seatedByPreference + flexibleSeated;

        cout << totalSeated << endl;
    }

    return 0;
}
