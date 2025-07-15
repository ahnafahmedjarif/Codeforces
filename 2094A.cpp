#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int t;
    cin >> t;

    while (t--){
        string str1, str2, str3;
        cin >> str1 >> str2 >> str3;

        string modernName = "";
        modernName += str1[0];
        modernName += str2[0];
        modernName += str3[0];

        cout << modernName << endl;

    }

    return 0;
}