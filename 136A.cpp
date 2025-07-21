#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main(){
	fastio;

	int n;
	cin >> n;

	vector<int> vec(n);
	for (int i=0; i<n; i++) cin >> vec[i];	

	vector<int> inverse(n);

	// 2 3 4 1
	// 4 1 2 3
	for (int i=0; i<n; i++){
		int j = vec[i];
		inverse[j-1] = i+1;
	}

	for (int i=0; i<n; i++) cout << inverse[i] << " ";
	cout << endl;
	
	return 0;

}