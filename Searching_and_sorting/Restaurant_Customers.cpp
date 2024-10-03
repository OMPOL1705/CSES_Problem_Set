#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
 
void check() {
    ll n;
    cin >> n;
 
    vector<ll> arr(n), dep(n);
 
    for(ll i=0; i<n; i++){
        cin >> arr[i] >> dep[i];
    }
 
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());
 
    ll l=0, r=0;
    ll maxi = 1, cos=0;
    while(l<n && r<n){
        if(arr[l] < dep[r]){
            cos++;
            maxi = max(maxi, cos);
            l++;
        }
        else{
            cos--;
            r++;
        }
    }
 
    cout << maxi << "\n";
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