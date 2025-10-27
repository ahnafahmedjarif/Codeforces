#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int lowerBound(vector<int>& arr, int n, int target){
    int l = 0;
    int r = n-1;
    int ans = n;

    while (l <= r){
        int mid = (l+r)/2;
        if (arr[mid] >= target){
            ans = min(ans, mid);
            r = mid-1;
        } else {
            l = mid + 1;
        }
    }

    return ans;
}

void solve(){

    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    for (int i=1; i<n; i++){
        arr[i] += arr[i-1];
    }
    
    while (q--){
        int qi;
        cin >> qi;

        int lb = lowerBound(arr, n, qi);
        lb += 1;

        if (lb > n) cout << "-1\n";
        else cout << lb << "\n";

    }

}

int32_t main() {
    fastio;

    int t;
    cin >> t;

    while (t--){
        solve();
    }

    return 0;
}