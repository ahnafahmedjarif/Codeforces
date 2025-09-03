#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main(){

	fastio;

	int n;
	cin >> n;

	if (n % 2 == 0) cout << (n/2) << "\n";
	else {
		cout << -(n+1)/2 << "\n";
	}

	return 0;
}