#include<bits/stdc++.h>
#define file(name) if (fopen(name".inp", "r")) freopen(name".inp", "r", stdin), freopen(name".out", "w", stdout) ; 
#define ll long long
#define bit(i , x) ((x >> i) & 1)
#define pb push_back
using namespace std ; 

const int maxn = 1e5 + 10 ; 
const ll base = 131 ; 
const ll MOD = 1e9 + 7 ;
const int INF = 2e9 ; 

int n ; ll a[maxn] ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("DEL1")

    cin >> n ; ll mul = 1 , Min = -INF ; int cnt = 0 ;  

    for(int i = 1 ; i <= n ; ++i) {
        cin >> a[i] ; 
        if (a[i] < 0 && a[i] > Min) Min = max(Min , a[i]) ; 
        if (a[i] != 0) (mul *= a[i]) %= MOD ; else ++cnt ;  
    }  

    if (cnt >= 2) return cout << 0 , 0 ; 
    if (cnt == 1) return cout << max(0LL , mul) , 0  ; 

    if (mul > 0) cout << mul ; 
    if (mul < 0) {
        ll ans = 1 , t = 0 ; 
        for(int i = 1 ; i <= n ; ++i) {
            if (a[i] == Min && !t) {
                t = 1 ; 
                continue ; 
            }

            (ans *= a[i]) %= MOD ; 
        }

        cout << ans ;  
    } 

    return 0 ;
}

