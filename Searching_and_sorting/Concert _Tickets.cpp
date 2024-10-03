#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
 
void check() {
    ll n, m;
    cin >> n >> m;
 
    ll maxP[m];
    multiset<pair<ll, ll>> priceT;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
 
        priceT.insert({x, i});
    }
    for(auto &i : maxP) cin >> i;
 
    for(ll i=0; i<m; i++){
        // if(priceT.size()==0) break;
 
        auto one = priceT.lower_bound({maxP[i]+1, 0});
 
        if(one != priceT.begin()){
            --one;
            cout << (*one).first << "\n";
            priceT.erase(one);
        }
        else{
            cout << "-1\n";
        }
    }
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
