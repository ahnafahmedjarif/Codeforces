#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main(){
	fastio;

	int n;
	cin >> n;

	int p;
	cin >> p;

	vector<int> a(p);
	for(int i=0; i<p; i++) cin >> a[i];

	int q;
	cin >> q;
  
  
  
	vector<int> b(q);
	for (int i=0; i<q; i++) cin >> b[i];

	set<int> merge;
	
	for (int i=0; i<a.size(); i++) merge.insert(a[i]);
	for (int i=0; i<b.size(); i++) merge.insert(b[i]);

	if (merge.size() == n) cout << "I become the guy.\n";
	else cout << "Oh, my keyboard!\n";

	return 0;

}