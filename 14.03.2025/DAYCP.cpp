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

int n , a[maxn] , ans = -1 ;

bool cp(int x) {
    int k = sqrt(x) ; 
    return k * k == x ; 
}

void Try(int idx , int mul , int cnt) {
    if (idx > n) {
        if (cp(mul) && cnt > 0) ans = max(ans , n - cnt) ; 
        return ; 
    }

    Try(idx + 1 , mul * a[idx] , cnt + 1) ; 
    Try(idx + 1 , mul , cnt) ; 
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("DAYCP") 

    cin >> n ; for(int i = 1 ; i <= n ; ++i) cin >> a[i] ; 

    Try(1 , 1 , 0) ; 

    cout << ans ; 

    return 0 ;
}

