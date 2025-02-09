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

ll n , l ; 
ll a[5][maxn] ; 
unordered_map<ll ,ll> mp ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    cin >> n >> l ; 

    for(int i = 1 ; i <= 4 ; ++i) 
        for(int j = 1 ; j <= n ; ++j) 
            cin >> a[i][j] ; 

    for(int i = 1 ; i <= n ; ++i) 
        for(int j = 1 ; j <= n ; ++j)
            ++mp[a[1][i] + a[2][j]] ; 

    int ans = 0 ; 

    for(int i = 1 ; i <= n ; ++i) 
        for(int j = 1 ; j <= n ; ++j)
            ans += mp[l - a[3][i] - a[4][j]] ; 

    cout << ans ; 

    return 0 ;
}

