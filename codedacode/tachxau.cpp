#include<bits/stdc++.h>
#define file(name) if (fopen(name".inp", "r")) freopen(name".inp", "r", stdin), freopen(name".out", "w", stdout) ; 
#define ll long long
#define bit(i , x) ((x >> i) & 1)
#define pb push_back
using namespace std ; 

const int maxn = 1e6 + 10 ; 
const ll base = 131 ; 
const ll MOD = 998244353 ;
const int INF = 2e9 ; 

int n ;
pair<ll ,ll> P[maxn] ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    cin >> n ; 

    for(int i = 1 ; i <= n ; ++i) {
        cin >> P[i].first >> P[i].second ; 
    }

    ll ans = 0 ; 

    for(int i = 1 ; i <= n - 2 ; ++i)
        for(int j = i + 1 ; j <= n - 1 ; ++j)
            for(int k = j + 1 ; k <= n ; ++k) {
                auto [a , x] = P[i] ; 
                auto [b , y] = P[j] ; 
                auto [c , z] = P[k] ; 

                if (!(a >= abs(b - c) && a <= b + c)) continue ; 
                
                ll D = 1 + ((x - y) != 0) + ((x * y - x * z + z * z - y * z) != 0) ; 

                ll sum = (a + b + c) ; for(int i = 2 ; i <= D ; ++i) (sum *= (a + b + c) % MOD) %= MOD ; 

                ans += sum ; 
            }

    cout << ans ; 

    return 0 ;
}

