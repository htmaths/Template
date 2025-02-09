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
    file("coins") 

    // x : 1 , y : 2 ; 
    // a * 1 + b * 2 = c * 1 + d * 2 ; 

    // a + 2b = c + 2d ; 

    // x - c + 2 * (y - d) = c + 2d ; 

    // x - c + 2 * y - 2 * d = c + 2d ; 

    // x + 2y = 2(c + 2d) ; 
    // c + 2d = (x + 2y) / 2 ;

    // c <= x , d <= y ; 
    // 2d = (x + 2y)/2 - c ; 
    // c = x || c = x - 1 ; 

    // a + c = x ; a = (x - c) ; 
    // b + d = y ; b = (y - d) ; 
    // a + b + c + d = x + y ; 

    int t ;
    cin >> t ; 

    while(t--) {
        int x , y ; 
        cin >> x >> y ; 

        if ((x % 2 == 0 && x != 0) || (x == 0 && y % 2 == 0)) cout << "YES\n" ; else cout << "NO\n" ; 
    }

    return 0 ;
}

