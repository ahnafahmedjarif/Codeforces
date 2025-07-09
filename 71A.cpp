#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long

int32_t main(){
    fastio;

    int t;
    cin >> t;
    while (t--){

        string str;
        cin >> str;

        if (str.length() > 10){
            int cnt = 0;
            for (int i=1; i<str.length()-1; i++){
                cnt ++;
            }

            cout << str[0] << cnt << str[str.length()-1] << "\n";

        } else {
            cout << str << "\n";
        }

    }

    return 0;
}