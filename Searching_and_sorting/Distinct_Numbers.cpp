#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
 
void check() {
    ll n;
    cin >> n;
 
    ll arr[n];
    for(auto &i : arr) cin >> i;
 
    map<ll, ll> mpp;
    for(auto it : arr){
        mpp[it]++;
    }
 
    cout << mpp.size() << "\n";
}
 
int32_t main() {
    cout.tie(0);
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    ll t = 1;
    // cin >> t;
    while (t--) {
        check();
    }
 
    return 0;
}
