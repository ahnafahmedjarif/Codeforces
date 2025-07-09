#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main() {
    fastio;

    int n, h;
    cin >> n >> h;

    vector<int> height(n);
    for(int i=0; i<n; i++){
        cin >> height[i];
    }   

    vector<int> width;
    for (int i=0; i<height.size(); i++){
        if (height[i] <= h){
            width.push_back(1);
        } else {
            width.push_back(2);
        }
    }

    int road_width = 0;
    for (auto val: width){
        road_width += val;
    }

    cout << road_width << "\n";

    return 0;
}