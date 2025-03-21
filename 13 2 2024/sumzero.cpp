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
unordered_map<ll ,int> mp ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    cin >> n ; 

    int x = 0 , ans = 0 ; mp[0] = 0 ;

    for(int i = 1 ; i <= n ; ++i) {
        int y ; cin >> y ; 
        x += y ; 

        if (mp.count(x)) ans = max(ans , i - mp[x]) ; else mp[x] = i ;  
    } 

    cout << ans ; 

    return 0 ;
}

