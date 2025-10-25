#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int mat[5][5];
    int centreRow = 3, centerCol = 3; 
    int oneRow = 0, oneCol = 0;
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> mat[i][j]; 
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (mat[i][j] == 1){
                oneRow = i + 1;
                oneCol = j + 1;
                break;
            }
        }
    }

    // for (int i = 0; i < 5; i++){
    //     for (int j = 0; j < 5; j++){
    //         cout << mat[i][j];
    //     }
    //     cout << endl;
    // }


    
    int ans = abs(centreRow - oneRow) + abs(centerCol - oneCol);
    cout << ans << "\n";
    


    // cout << oneRow << oneCol << "\n";

    return 0;
}