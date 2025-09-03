#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int t;
    cin >> t;

    while (t--){
        int n = 4;
        vector<int> distances(n);

        for (int i=0; i<n; i++){
            cin >> distances[i];
        }

        int cnt = 0;
        int taimur_dis = distances[0];
        for (int i=1; i<n; i++){
            if (distances[i] > taimur_dis){
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}