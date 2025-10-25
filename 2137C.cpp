#include <bits/stdc++.h>
using namespace std;
     
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
     
int32_t main() {
    fastio;
     
    int t;
    cin >> t;
     
    while (t--){
        int a, b, ans;
        cin >> a >> b;
        
        if (a % 2 == 1 && b % 2 == 1){
            ans = (a * b) + 1;
        } else if (a % 2 == 0 && b % 2 == 0){
            a = a * (b / 2);
            b = 2;
            ans = a + b;
        } else if (a % 2 == 1 && b % 2 == 0){
            a = a * (b / 2);
            b = 2;
            ans = a + b;
            if (ans % 2 == 1){
                ans = -1;
            }
        } else {
            ans = -1;
        }

        cout << ans << "\n";

    }
     
    return 0;
}