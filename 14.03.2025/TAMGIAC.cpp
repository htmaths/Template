#include<bits/stdc++.h>
#define file(name) if (fopen(name".inp", "r")) freopen(name".inp", "r", stdin), freopen(name".out", "w", stdout) ; 
#define ll long long
#define bit(i , x) ((x >> i) & 1)
#define pb push_back
using namespace std ; 

const int maxn = 2001 ; 
const ll base = 131 ; 
const ll MOD = 1e9 + 7 ;
const int INF = 2e9 ; 

int n , m , k ;  
ll a[maxn][maxn] , sum[maxn][maxn] , tt[maxn][maxn] , pre[maxn][maxn] ; 

ll query(int x , int y , int u , int v) {
    return pre[u][v] - pre[x - 1][v] - pre[u][y - 1] + pre[x - 1][y - 1] ;
}


signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("TAMGIAC") 

    cin >> n >> m >> k ;

    for(int i = 1 ; i <= n ; ++i) 
        for(int j = 1 ; j <= m ; ++j) cin >> a[i][j] , sum[i][j] = sum[i][j - 1] + a[i][j] ; 

    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ; ++j) tt[i][j] = sum[i][j] + tt[i - 1][j - 1] ; 

    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ; ++j) pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + a[i][j] ; 

    ll ans = LLONG_MIN ; 

    for (int i = 1 ; i <= n - k + 1 ; ++i)
        for (int j = 1 ; j <= m - k + 1 ; ++j) 
            ans = max(ans , tt[i + k - 1][j + k - 1] - tt[i - 1][j - 1] - query(i , 1 , i + k - 1 , j - 1)) ;

    cout << ans ; 


    return 0 ;
}

