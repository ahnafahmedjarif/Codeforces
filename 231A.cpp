#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long

int32_t main(){
    fastio;

    int n;
    cin >> n;
    int cnt = 0;
    for (int i=0; i<n; i++){

        int a, b, c;
        cin >> a >> b >> c;

        
        if (a+b+c >= 2) cnt++;
    }

     cout << cnt << "\n";

    return 0;
}