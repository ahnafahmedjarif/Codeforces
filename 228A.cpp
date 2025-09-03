#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main(){
	fastio;

    set<int> colors;
    for (int i = 0; i < 4; i++) {
        int x;
        cin >> x;
        colors.insert(x); 
    }
    cout << 4 - colors.size() << endl;

    return 0;
}