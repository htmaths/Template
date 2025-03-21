#include<bits/stdc++.h>
#define file(name) if (fopen(name".inp", "r")) freopen(name".inp", "r", stdin), freopen(name".out", "w", stdout) ; 
#define ll long long
#define bit(i , x) ((x >> i) & 1)
#define pb push_back
#define ii pair<int ,int>
using namespace std ; 

const int maxn = 1e6 + 10 ; 
const ll base = 131 ; 
const ll MOD = 1e9 + 7 ;
const int INF = 2e9 ; 

int n , m ; 
int a[maxn] ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht")

    cin >> m >> n ; 

    for(int i = 1 ; i <= n ; ++i) {
        int x ; 
        cin >> x ; 

        a[x] = 1 ; 
    } 

    vector<ii> b ; 

    int i = 1 , d , c ; 

    while(i <= m) {
        if (a[i] == 1) {
            d = i ; 
            while(i <= m && a[++i]) ;
            c = i - 1 ;
            b.pb({d , c}) ;  
        }

        ++i ; 
    }

    int ans ;

    if (n == 1) ans = 1 ; else ans = b[0].second - b[0].first + 2 ; 

    for(int i = 1 ; i < b.size() ; ++i) {
        int l = b[i].second - b[i].first + 1 ; 
        int r = b[i - 1].second - b[i - 1].first + 1 ; 

        ans = max(ans , l + 1) ; 

        if (b[i].first - b[i - 1].second == 2) ans = max(ans , l + r + 1) ; 
    }

    cout << ans ; 

    return 0 ;
}

    