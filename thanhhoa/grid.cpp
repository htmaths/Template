#include<bits/stdc++.h>
#define file(name) if (fopen(name".inp", "r")) freopen(name".inp", "r", stdin), freopen(name".out", "w", stdout) ; 
#define ll long long
#define bit(i , x) ((x >> i) & 1)
#define pb push_back
using namespace std ; 

const int maxn = 1e3 + 10 ; 
const ll base = 131 ; 
const ll MOD = 1e9 + 7 ;
const int INF = 2e9 ;

int n ;  
pair<int ,int> grid[maxn][maxn] ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("grid") 

    cin >> n ; 
    string a[n + 1] ; 

    for(int i = 0 ; i < n ; ++i) cin >> a[i] ; 

    for(int i = 0 ; i < n ; ++i) 
        for(int j = 0 ; j < n ; ++j) 
            if (a[i][j] == 'S') grid[i + 1][j + 1] = {1 , 1} ; 

    for(int i = 1 ; i <= n ; ++i)
        for(int j = n ; j >= 1 ; --j)
            if (grid[i][j + 1].first) grid[i][j].first = 1 ; 

    for(int j = 1 ; j <= n ; ++j)
        for(int i = n ; i >= 1 ; --i)
            if (grid[i + 1][j].second) grid[i][j].second = 1 ; 
    
    // for(int i = 1 ; i <= n ; ++i) {
    //     for(int j = 1 ; j <= n ; ++j) cout << grid[i][j].first << grid[i][j].second << ' '  ; 

    //     cout << '\n' ; 
    // }

    int ans = 0 ; 

    for(int i = 1 ; i <= n ; ++i) 
        for(int j = 1 ; j <= n ; ++j) if (grid[i][j] == make_pair(0 , 0)) ++ans ; 

    cout << ans ; 

    return 0 ;
}

