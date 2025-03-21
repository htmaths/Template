#include<bits/stdc++.h>
#define file(name) if (fopen(name".inp", "r")) freopen(name".inp", "r", stdin), freopen(name".out", "w", stdout) ; 
#define ll long long
#define bit(i , x) ((x >> i) & 1)
#define pb push_back
using namespace std ; 

const int maxn = 2e5 + 10 ; 
const ll base = 131 ; 
const ll MOD = 1e9 + 7 ;
const int INF = 2e9 ; 

int n ; ll a[maxn] , ttt[maxn] , tts[maxn] ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("BAI4") 

    cin >> n ; 

    for(int i = 1 ; i <= n ; ++i) cin >> a[i] ; 

    for(int i = 1 ; i <= n ; ++i) ttt[i] = ttt[i - 1] + a[i] ; 
    for(int i = n ; i >= 1 ; --i) tts[i] = tts[i + 1] + a[i] ; 

    ll mp1[3] , mp2[3] , f1[n + 2]  , f2[n + 2] ;

    fill(f1 , f1 + n + 2 , -1e18) ; 
    fill(f2 , f2 + n + 2 , -1e18) ; 
    fill(mp1 , mp1 + 3 , 1e18) ; 
    fill(mp2 , mp2 + 3 , 1e18) ;  

    mp1[0] = 0 ; 
    mp2[(n + 1) % 3] = 0 ; 

    for(int i = 1 ; i <= n ; ++i) {
        if (i >= 3) f1[i] = max(f1[i - 1] , ttt[i] - mp1[i % 3]) ; 
        mp1[i % 3] = min(mp1[i % 3] , ttt[i]) ; 
    }

    for(int i = n ; i >= 1 ; --i) {
        if (i <= n - 2) f2[i] = max(f2[i + 1] , tts[i] - mp2[i % 3]) ; 
        mp2[i % 3] = min(mp2[i % 3] , tts[i]) ; 
    }

    ll ans = -1e18 ;

    for(int i = 3 ; i <= n - 2 ; ++i) ans = max(ans , f1[i] + f2[i + 1]) ; 

    cout << ans ; 

    return 0 ;
}

