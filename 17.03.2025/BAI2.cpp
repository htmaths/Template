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

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("BAI2") 

    int n ; cin >> n ; int ans = 0 , cnt1 = 0 , cnt2 = 0 ; 

    for(int i = 1 ; i <= n ; ++i) {
        int x ; cin >> x ; 

        if (x & 1) {
            cnt1++ ; 
            ans = max(ans , cnt1) ; 
            cnt2 = 0 ; 
        } else {
            cnt2++ ; 
            ans = max(ans , cnt2) ; 
            cnt1 = 0 ; 
        }
    }

    cout << ans << '\n' ; 

    return 0 ;
}

