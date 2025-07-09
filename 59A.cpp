#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    string str;
    cin >> str;
    
    int cnt_upper = 0;
    int cnt_lower = 0;

    for (auto c: str){
        if (isupper(c)){
            cnt_upper++;
        } else {
            cnt_lower++;
        }
    }

    if (cnt_upper > cnt_lower){
        for (int i=0; i<str.length(); i++){
            str[i] = toupper(str[i]);
        }
        cout << str << endl;
    } else{
        for (int i=0; i<str.length(); i++){
            str[i] = tolower(str[i]);
        }
        cout << str << endl;
    }

    return 0;
}