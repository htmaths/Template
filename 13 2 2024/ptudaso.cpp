#include<bits/stdc++.h>
#define file(name) if (fopen(name".inp", "r")) freopen(name".inp", "r", stdin), freopen(name".out", "w", stdout) ; 
#define ll long long
#define bit(i , x) ((x >> i) & 1)
#define pb push_back
using namespace std ; 

const int maxn = 1e6 + 10 ; 
const ll base = 131 ; 
const ll MOD = 1e9 + 7 ;
const int INF = 2e9 ; 

int n ; ll a[maxn] ;  
unordered_map<ll ,int> mp ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    cin >> n ; 

    // r - l = a[r] - a[l]
    // a[l] - l = a[r] - r ;

    mp[0] = 0 ; int ans = 0 ; 

    for(int i = 1 ; i <= n ; ++i) {
        cin >> a[i] ; a[i] += a[i - 1] ; 

        if (mp.count(a[i] - i)) ans = max(ans , i - mp[a[i] - i]) ; else mp[a[i] - i] = i ; 
    }

    cout << ans ; 

    return 0 ;
}

