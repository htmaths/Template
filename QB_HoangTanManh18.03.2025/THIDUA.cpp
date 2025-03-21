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

string s ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    cin >> s ; 

    map<pair<int , int> , int> cnt ;
    int d1 = 0 , d2 = 0 ;
    ll res = 0 ;

    cnt[{0 , 0}] = 1 ;

    for (char c : s) {
        if (c == 'N') d1++ ;
        if (c == 'A') { 
            d1-- ; d2++ ; 
        }
        if (c == 'M') d2-- ;

        pair<int , int> key = {d1 , d2} ;
        res += cnt[key] ;
        cnt[key]++ ;
    }

    cout << res << '\n' ; 

    return 0 ;
}