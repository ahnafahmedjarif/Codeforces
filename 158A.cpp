#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long

int32_t main(){
    fastio;

    int n, k;
    cin >> n >> k;

    vector<int> scores(n);

    for (int i=0; i<n; i++) cin >> scores[i];


    int kthScore = scores[k-1];
    int nextRound = 0;

    for (auto val: scores){
        if (val >= kthScore && val > 0){
            nextRound += 1;
        }
    }

    cout << nextRound << endl;

    return 0;
}