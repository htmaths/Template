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

ll a , b ;

ll cnt(ll x) {
    ll total = 0 ;
    ll i = 1 ;
    
    while (i <= x) {
        ll k = x / i ;
        ll last_same = x / k ;
        total += k * (last_same - i + 1) ;
        i = last_same + 1 ;
    }

    return total ;
}


signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("TONGSOUOC") 

    cin >> a >> b ;

    if (a > b) swap(a, b) ;

    cout << cnt(b) - cnt(a - 1) ;

    return 0 ;
}
