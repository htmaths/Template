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

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    int n , k ; ll ans = 0 ; 
    cin >> n >> k ;
    unordered_map<int ,int> mp ;  

    for(int i = 1 ; i <= n ; ++i) {
        int x ; 
        cin >> x ; 

        x %= k ; 
    
        if (x == 0) ans += mp[0] ; 
        if (x > 0) ans += mp[k - x] + mp[-x] ; 
        if (x < 0) ans += mp[-(k + x)] + mp[-x] ; 

        ++mp[x] ; 
    }

    cout << ans ; 

    return 0 ;
}

