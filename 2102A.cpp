#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main(){
	fastio;

	int t;
	cin >> t;

	while (t--){
		int n, m, p, q;
		cin >> n >> m >> p >> q;

		if (n % p == 0){
			if ((n/p) * q == m){
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
		}
		else {
			cout << "YES\n";
		}
	}

	return 0;

}