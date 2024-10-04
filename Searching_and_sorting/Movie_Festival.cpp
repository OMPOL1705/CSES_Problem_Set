#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

// void printPairArray(vector<pair<ll, ll>> arr){
//     for(auto &i : arr) cout << i.first << " " << i.second << "\n";
// }

// void printArray(vector<ll> arr){
//     for(auto &i : arr) cout << i << " ";
//     cout << "\n";
// }
 
bool comp(pair<ll, ll> &a, pair<ll, ll> &b){
    return a.second<b.second;
}


void check() {
    ll n;
    cin >> n;
 
    vector<pair<ll, ll>> movie(n);
 
    for(ll i=0; i<n; i++){
        ll x, y;
        cin >> x >> y;

        movie[i] = {x, y};
    }
 
    sort(movie.begin(), movie.end(), comp);
    ll t=-1, m=0;
    for(ll i=0; i<n; i++){
        if(movie[i].first >= t){
            m++;
            t = movie[i].second;
        }
    }
    

    cout << m << '\n';
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