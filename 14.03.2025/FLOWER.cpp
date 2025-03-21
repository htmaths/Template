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
    string a , b ; cin >> a >> b ; int n = a.size() , m = b.size() ; 

    vector<int> psa[26] , psb[26] ;
    for (int i = 0 ; i < n ; i++) psa[a[i] - 'A'].pb(i) ;
    for (int j = 0 ; j < m ; j++) psb[b[j] - 'A'].pb(j) ; 

    int ans = INF ;

    for (int i = 0 ; i < 26 ; i++) {
        if (psa[i].empty() || psb[i].empty()) continue ;

        for (int x : psa[i]) {
            int ps = lower_bound(psb[i].begin() , psb[i].end() , x) - psb[i].begin() ;
            
            vector<int> vt ;

            if (ps != psb[i].size()) vt.pb(psb[i][ps]) ;
            if (ps != 0) vt.pb(psb[i][ps - 1]) ;  

            for (int y : vt) {
                int top = x ;
                int bottom = n - x - 1 ;
                int left = y ;
                int right = m - y - 1 ;

                int cur = abs(top - left) + abs(left - bottom) + abs(bottom - right) + abs(right - top) ;
                ans = min(ans , cur) ;
            }
        }
    }

    cout << ans << '\n' ; 
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("FLOWER") 

    int t ; cin >> t ;

    while(t--) {
        solve() ; 
    }

    return 0 ;
}

