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

int n , a[maxn] ; 

int check(int u , int v) {
    vector<int> res ;
    for (int i = u ; i <= v ; ++i)
    {
        auto it = lower_bound(res.begin() , res.end() , a[i]) ;
        if (it != res.end()) *it = a[i] ;
        else res.pb(a[i]) ; 
    }

    return n - res.size() ;
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    cin >> n ; for(int i = 1 ; i <= n ; ++i) cin >> a[i] , a[i + n] = a[i] ;

    int ans = n + 1 ; 

    for(int i = 1 ; i <= n ; ++i) ans = min(check(i , i + n - 1) , ans) ;
  
    cout << ans ;  

    return 0 ;
}

