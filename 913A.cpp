#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

long long bin_exp(long long a, long long n){

    if (n == 0)
        return 1;
    
    if (n == 1)
        return a;

    int x = bin_exp(a, n/2);
    int ans = 1;

    if (n % 2 == 1){
        ans = (x * x);
        ans = (ans * a);
    } 
    else
        ans = (x * x);

    return ans;

}

int32_t main() {
    fastio;

    long n, m;
    cin >> n >> m;

    if (n > 30){
        cout << m << endl;
    } 
    else{
        long long x = bin_exp(2, n);
        long long ans = m % x;
        cout << ans << endl;
    }

    return 0;
    
}