#include<bits/stdc++.h>
#define file(name) if (fopen(name".inp", "r")) freopen(name".inp", "r", stdin), freopen(name".out", "w", stdout) ; 
#define ll long long
#define bit(i , x) ((x >> i) & 1)
#define pb push_back
#define ii pair<int , int> 
#define iiii pair<ii , ii> 
using namespace std ; 

const int maxn = 1e6 + 10 ; 
const ll base = 131 ; 
const ll MOD = 1e9 + 7 ;
const int INF = 2e9 ; 

int n , m , K ;
int a[55][55] ;
int dp[55][55][55] ;

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht")

    cin >> n >> m >> K ;

    for (int i = 1 ; i <= n ; i++)
        for (int j = 1 ; j <= m ; j++)
            cin >> a[i][j] ;


        
    for(int l = 0 ; l <= K ; ++l)
        for(int i = 1 ; i <= n ; ++i)
            for(int j = 1 ; j <= m ; ++j) {
                dp[i][j][l] = -INF ; 
                if (i > 1) dp[i][j][l] = max(dp[i][j][l] , dp[i - 1][j][l]) ; 
                if (j > 1) dp[i][j][l] = max(dp[i][j][l] , dp[i - 1][j][l]) ;
                if (i < n && l > 0) dp[i][j][l] = max(dp[i][j][l] , dp[i + 1][j][l - 1]) ; 
                if (j < m && l > 0) dp[i][j][l] = max(dp[i][j][l] , dp[i][j + 1][l - 1]) ;  

                dp[i][j][l] += a[i][j] ; 
            }

    int ans = -INF ;
    for (int r = 0 ; r <= K ; r++) ans = max(ans, dp[n][m][r]) ;

    cout << ans ;

    return 0 ;
}
