#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long


string mirror(string a){
	int n = a.size()-1;
	int i = 0, j = n;

	while (i < j){
		swap(a[i], a[j]);
		i++;
		j--;
	}

	for(auto &ch: a){
		if (ch == 'p') ch = 'q';
		else if (ch == 'q') ch = 'p';
	}

	return a;
}

int32_t main(){
	fastio;

	int t;
	cin >> t;

	while (t--){
		string a;
		cin >> a;

		string b = mirror(a);

		cout << b << endl;


	}
}