#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define int long long

int32_t main(){
	fastio;

    int t;
    cin >> t;

    while (t--){
    	int a, b, c;
        cin >> a >> b >> c;

        if (a+b == c || b+c == a || a+c == b){
            cout << "YES\n";
        }

        else{
            cout << "NO\n";
        }
    }

	return 0;
}