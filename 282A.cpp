#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long

int32_t main(){
    fastio;

    int n;
    cin >> n;

    int x = 0;
    string s;

    while (n--) {
        cin >> s;
        if (s.find("++") != string::npos)
            x++;
        else
            x--;
    }

    cout << x << endl;
    return 0;

    return 0;
}