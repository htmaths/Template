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

int n ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("CANDY")

    cin >> n ; ll a[n + 1] ; ll ans = 0 ; 

    for(int i = 1 ; i <= n ; ++i) cin >> a[i] , ans += a[i] ; 

    sort(a + 1 , a + 1 + n) ; 

    for(int i = 1 ; i <= n / 2 ; ++i) ans += a[n - i + 1] - a[i] ; 

    cout << ans ;  

    return 0 ;
}

