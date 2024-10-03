#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
 
void check() {
    ll n, m, k;
    cin >> n >> m >> k;
 
    ll a[n], b[m];
    for(auto &i : a) cin >> i;
 
    for(auto &i : b) cin >> i;
 
    sort(a, a+n);
    sort(b, b+m);
    // 45 60 60 80
    // 30 60 75
    ll l=0, r=0, ans=0;
    while(l<n && r<m){
        if(b[r] < a[l]-k){
            r++;
            continue;
        }
        if(b[r] > a[l]+k){
            l++;
            continue;
        }
 
        ans++;
        l++;
        r++;
    }
 
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
