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


void check() {
    ll n, x;
    cin >> n >> x;
 
    vector<ll> arr(n);
    multimap<int, int> mpp;
    for(ll i=0; i<n; i++){
        cin >> arr[i];
        mpp.insert({arr[i], i+1});
    }

    for(ll i=0; i<n; i++){
        auto one = mpp.find(x - arr[i]);

        if(one!=mpp.end()){
            if(one==mpp.find(arr[i])){
                if(one!=(--mpp.end())){
                    one++;
                    if((*one).first == arr[i]){
                        cout << i+1 << " " << ((*one).second) << "\n";
                        return;
                    }
                }
            }
            else{
                cout << i+1 << " " << ((*one).second) << "\n";
                return;
            }
        }
    }
    cout << "IMPOSSIBLE\n";
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