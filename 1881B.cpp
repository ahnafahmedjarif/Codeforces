#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long


bool possible(vector<int> threads, int parts, int target){
	int count = 0;
	for (int length: threads){
		count += length/target;
	}
	if (count >= parts) return true;
	else return false;

}

int32_t main(){
	fastio;

	int t;
	cin >> t;

	while (t--){
		int a, b, c;
		cin >> a >> b >> c;
		int sum = a + b + c;

 		vector<int> threads = {a, b, c};
		bool found = false;

		for (int k=3; k<=6; k++){
			if (sum % k != 0) continue;

			int targetLength = sum / k;
			if (possible(threads, k, targetLength)){
				found = true;
				break;
			}
		}

		if (found) cout << "YES\n";
		else cout << "NO\n";

	}
}