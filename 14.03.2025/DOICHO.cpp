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

void solve() {
    int n ; cin >> n ; int a[2 * n + 1] ; 

    for(int i = 1 ; i <= 2 * n ; ++i) cin >> a[i] ; 

    sort(a + 1 , a + 1 + 2 * n) ; 

    int ans = INF ; 

    for(int i = 1 ; i <= n + 1 ; ++i) {
        ans = min(ans , a[i + n - 1] - a[i]) ; 
    }

    cout << ans << '\n' ; 
} 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("DOICHO") 

    int t ; cin >> t ; 

    while(t--) {
        solve() ; 
    }

    return 0 ;
}

