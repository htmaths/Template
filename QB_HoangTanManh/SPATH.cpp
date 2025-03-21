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

int n , m ; 
char a[maxn][maxn] ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    cin >> n >> m ; 

    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ; ++j)
            cin >> a[i][j] ; 

    string dp[n + 1][m + 1] ; 

    for(int i = 1 ; i <= n ; ++i) 
        dp[i][1] = dp[i - 1][1] + a[i][1] ; 

    for(int i = 1 ; i <= m ; ++i) 
        dp[1][i] = dp[1][i - 1] + a[1][i] ; 

    for(int i = 2 ; i <= n ; ++i) 
        for(int j = 2 ; j <= m ; ++j)
            dp[i][j] = min(dp[i - 1][j] , dp[i][j - 1]) + a[i][j] ; 

    cout << dp[n][m] ; 

    return 0 ;
}

