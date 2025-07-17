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

        vector<int> vec(n);

        for (int i=0; i<n; i++){
            cin >> vec[i];
        }

        int cnt_one = 0;
        int cnt_zero = 0;

        for (int i=0; i<n; i++){
            if (vec[i] == 0) cnt_zero++;
            else cnt_one++;
        }

        if (cnt_one == n) cout << "YES\n";
        else if (cnt_zero == n) cout << "YES\n";

        else {
            bool liar_found = false;

            for (int i = 0; i < n-1; i++){
                if (vec[i] == 0 && vec[i+1] == 0){
                    liar_found = true;
                    break;
                }
            }

            if (liar_found == false) cout << "NO\n";
            else cout << "YES\n";

        }
        
    }   

    return 0;
}