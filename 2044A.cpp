#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main(){
	fastio;

	int t;
	cin >> t;

	while (t--){
		int n;
		cin >> n;

		int cnt = 0;
		for (int i=1; i<=n; i++){
			for (int j=1; j<=n; j++){
				if (i+j == n) cnt++;
			}
		}

		cout << cnt << endl;
	}

	return 0;
}