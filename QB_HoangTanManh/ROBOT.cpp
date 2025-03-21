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

ll a , b , c ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    cin >> a >> b >> c ;

    if (c == 2) {
        return cout << (b - a) / 2 , 0 ; 
    }

    ll ans = 0 ;  

    while(a < b) {
        if ((a + 2) % c != 0) a += 2 , ans += 1 ; else 
        a += 3 , ans += 2 ;  
    }

    cout << ans ; 

    return 0 ;
}

