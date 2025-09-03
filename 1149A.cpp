#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int n;
    cin >> n;

    int ones = 0;
    int twos = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x == 1) ones++;
        else twos++;
    }

    if (twos == 0){ // no two present
        for (int i=0; i<ones; i++) cout << "1 ";
    }

    else if (ones == 0){
        for (int i=0; i<twos; i++) cout << "2 ";
    }

    else {
        cout << "2 1 ";
        for (int i=0; i<twos-1; i++) cout << "2 ";
        for (int i=0; i<ones-1; i++) cout << "1 ";
    }

    return 0;
}