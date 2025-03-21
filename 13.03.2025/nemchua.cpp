#include<bits/stdc++.h>
#define file(name) if (fopen(name".inp", "r")) freopen(name".inp", "r", stdin), freopen(name".out", "w", stdout) ; 
#define ll long long
#define bit(i , x) ((x >> i) & 1)
#define pb push_back
using namespace std ; 

const int maxn = 101 ; 
const ll base = 131 ; 
const ll MOD = 1e9 + 7 ;
const int INF = 2e9 ; 

int n ; ll m , a[maxn] , b[maxn] ; 

bool check(ll x) {
    ll sum = 0 ; 

    for(int i = 1 ; i <= n ; ++i) {
         ll k = x / (b[i] + 1) ; 
         sum += k * a[i] * b[i] + (x % (b[i] + 1)) * a[i] ; 
         if (sum >= m) return 1 ; 
    }

    return 0 ;
}

void solve() {
    ll l = 1 , r = LLONG_MAX , mid , ans ; 

    while(l <= r) {
        mid = l + ((r - l) >> 1) ; 

        if (check(mid)) {
            ans = mid ; 
            r = mid - 1 ;  
        } else l = mid + 1 ; 
    }

    cout << ans ; 
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    cin >> n >> m ; 

    for(int i = 1 ; i <= n ; ++i) cin >> a[i] >> b[i] ; 

    solve() ;  

    return 0 ;
}

