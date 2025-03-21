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

    vector<int> pre[3] ;

    pre[0].assign(s.size() + 1 , 0) ; 
    pre[1].assign(s.size() + 1 , 0) ; 
    pre[2].assign(s.size() + 1 , 0) ;  

    for(int i = 0 ; i < s.size() ; ++i) {
        pre[0][i + 1] = pre[0][i] ; 
        pre[1][i + 1] = pre[1][i] ; 
        pre[2][i + 1] = pre[2][i] ; 
        
        if (s[i] == 'N') pre[0][i + 1]++ ; 
        if (s[i] == 'A') pre[1][i + 1]++ ; 
        if (s[i] == 'M') pre[2][i + 1]++ ; 
    }

    cout << pre[1][s.size()] << ' ' << pre[1][s.size()] << ' ' << pre[1][s.size()] ; 

    return 0 ;
}

