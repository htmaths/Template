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
    file("ht") 

    string s1 , s2 ;
    cin >> s1 >> s2 ;
 
    int n = s1.size() , m = s2.size() ;
 
    unordered_map<char , int> mp ;
    for (char c : s1) mp[c - '0']++ ;
 
    char tmp = '#' ;
    for (char c : s2) if (mp[c - '0']) tmp = max(tmp, c) ;
 
    if (tmp == '#') return cout << -1 , 0 ;
 
    vector <int> save1 , save2 ;
 
    for(int i = 0 ; i < n ; ++i) if (s1[i] == tmp) save1.pb(i) ;
    for(int i = 0 ; i < m ; ++i) if (s2[i] == tmp) save2.pb(i) ; 
 
    string ans = "" ;
    ans += tmp ;
 
    for (int x : save1) {
        for (int y : pos2) {
            string cur = "" ;
            cur += tmp ;
 
            int len = 1 ; 
            while (len + x < n && len + y < m && s1[x + len] == s2[y + len]) {
                cur += s1[x + len] ;
                ++len ;
            }
 
            ans = max(ans , cur) ; 
        }
    }
 
    cout << ans ;

    return 0 ;
}

