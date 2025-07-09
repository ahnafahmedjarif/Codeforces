#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long

int32_t main(){

    fastio;

    string str;
    cin >> str;

    set<char> distinctChar;
    for (auto ch: str){
        distinctChar.insert(ch);
    }

    if (distinctChar.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

    return 0;
}