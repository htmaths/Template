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

ll N ; string s ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ROBOT") 

    cin >> N >> s ; 

    ll l = 0 , r = 0 , mi = 0 , ma = 0 ;

    for(char ch : s) {
        if (ch == 'L') ++l ; 
        if (ch == 'R') ++r ; 

        mi = min(mi , l - r) ; 
        ma = max(ma , l - r) ; 
    }

    cout << ma - mi + 1 ; 

    return 0 ;
}

