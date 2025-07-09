#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int a, b;
    cin >> a >> b;

    int year = 0;
   
    while (a <= b){
        a = a * 3;
        b = b * 2;
        year++;
    }

    cout << year << endl;

    return 0;
}