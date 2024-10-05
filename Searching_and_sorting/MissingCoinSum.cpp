#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

void printPairArray(vector<pair<ll, ll>> arr){
    for(auto &i : arr) cout << i.first << " " << i.second << "\n";
}

void printArray(vector<ll> arr){
    for(auto &i : arr) cout << i << " ";
    cout << "\n";
}
 
bool comp(pair<ll, ll> &a, pair<ll, ll> &b){
    return a.second<b.second;
}

int give(vector<ll> &arr, ll n, ll j){
    ll sum=0;
        for(ll i=0; i<j; i++){
            sum += (arr[j] - arr[i]);
        }

        for(ll i=j+1; i<n; i++){
            sum += arr[i] - arr[j];
        }
        return sum;
}

void check() {
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for(auto &i : arr) cin >> i;
    sort(arr.begin(), arr.end());

    ll x=1;
    for(ll i=0; i<n; i++){
        if(arr[i] > x){
            cout << x << "\n";
            return;
        }

        x += arr[i];
    }
    cout << x << "\n";
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