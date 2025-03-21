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
    file("BAI1") 

    int n ; 
    cin >> n ;  
    cin.ignore() ;
    string s ;
    getline(cin , s) ;

    string ans ;  

    for(int i = 0 ; i < s.size() ; ++i) if (s[i] != ' ') {
        if (isalpha(s[i])) 
            ans += tolower(s[i]) ; else ans += s[i] ; 
    }

    cout << ans ; 

    return 0 ;
}

