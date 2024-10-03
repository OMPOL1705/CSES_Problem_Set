#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
 
void check() {
    ll n, x;
    cin >> n >> x;
 
    vector<ll> a(n);
    for(auto &i : a) cin >> i;
 
    sort(a.begin(), a.end());
    ll ans=0;
    ll l=0, r=n-1;
    while(l<r){
        if(a[l] + a[r] <= x){
            r--;
            l++;
            ans++;
        }
        else{
            r--;
            ans++;
        }
    }
    if(l==r) ans++;
 
    cout << ans << "\n";
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
