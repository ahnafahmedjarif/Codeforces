#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<int> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i];

        int avg = nums[0];
        for (int i=0; i<n; i++){
            if (nums[i] > avg){
                avg = nums[i];
            }
        }

        cout << avg << "\n";
        
    }

    return 0;
}