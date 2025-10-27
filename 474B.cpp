#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];

    for (int i=1; i<n; i++){
        arr[i] += arr[i-1];
    }

    int m;
    cin >> m;

    while (m--){
        int q;
        cin >> q;

        int l = 0, r = n - 1, ans = n;
        while (l <= r){
            int mid = (l+r)/2;
            if (arr[mid] >= q){
                ans = min(ans, mid);
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << ans+1 << "\n";
    }

    return 0;
}