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
int a[maxn] , ucln[maxn][20] , rmq[maxn][20] ; 

int check(int l, int r) {
    int k = __lg(r - l + 1) ;
    return min(rmq[l][k], rmq[r - (1 << k) + 1][k]) == __gcd(ucln[l][k], ucln[r - (1 << k) + 1][k]) ;
}

bool kt(int mid) {
    for(int i = mid ; i <= n ; ++i)
        if (check(i - mid + 1, i)) return 1 ; 

    return 0 ; 
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    cin >> n ;

    for(int i = 1 ; i <= n ; ++i) {
        cin >> a[i] ; 
        ucln[i][0] = rmq[i][0] = a[i] ; 
    } 

    for(int j = 1 ; j <= 19 ; ++j)
        for(int i = 1 ; i <= n ; ++i) {
            if (i + (1 << (j - 1)) > n) continue ; 
            ucln[i][j] = __gcd(ucln[i + (1 << (j - 1))][j - 1] , ucln[i][j - 1]) ;
            rmq[i][j] = min(rmq[i + (1 << (j - 1))][j - 1] , rmq[i][j - 1]) ;  
        }

    int l = 1 , r = n , mid , ans ; 

    while(l <= r) {
        mid = (l + r) >> 1 ; 

        if (kt(mid)) {
            ans = mid ; 
            l = mid + 1 ; 
        } else r = mid - 1 ; 
    }

    vector<int> save ; 

    for(int i = ans ; i <= n ; ++i)
        if (check(i - ans + 1, i)) save.pb(i - ans + 1) ;

    cout << save.size() << ' ' << ans - 1 << '\n' ;

    for(auto x : save) cout << x << '\n' ;  

    return 0 ;
}

