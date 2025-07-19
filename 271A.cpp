#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

bool hasDistinctDigits(int year){
    string s = to_string(year);
    set<char> digits;

    for (auto ch: s){
        if (digits.count(ch)) return false;
        digits.insert(ch);
    }

    return true;
}

int32_t main() {
    fastio;

    int year;
    cin >> year;

    while (true){
        year++;
        if (hasDistinctDigits(year)){
            cout << year << endl;
            break;
        }
    }


    return 0;
}