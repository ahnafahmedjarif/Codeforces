#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long

int32_t main(){
    fastio;

    string str;
    cin >> str;

    vector<char> nums;
    for (char c : str) {
        if (c != '+') {
            nums.push_back(c);
        }
    }

    sort(nums.begin(), nums.end());

    for (int i=0; i<nums.size(); ++i){
        cout << nums[i];
        if (i!=nums.size()-1){
            cout << "+";
        }
    }

    return 0;
}