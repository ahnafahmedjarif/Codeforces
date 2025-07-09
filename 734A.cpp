#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int n;
    string str;
    cin >> n;
    cin >> str;

    int anton = 0;
    int danik = 0;
    for (auto val: str){
        if (val == 'A') anton++;
        else if (val == 'D') danik++;
    }

    if (anton > danik) cout << "Anton";
    else if (anton < danik) cout << "Danik";
    else cout << "Friendship";

    return 0;
}