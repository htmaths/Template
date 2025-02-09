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

void solve() {
    string s ; int ans = 0 ;  
    cin >> s ; 

    int mp[27] ; // do dai xau lien tiep deu la ki tu so i : max

    memset(mp , 0 , sizeof(mp)) ; 

    if (s.size()) mp[s[0] - 'a'] = 1 ; 

    int cnt = 1 ;

    s = s + ' ' ;

    for(int i = 1 ; i < s.size() ; ++i) {
        if (s[i] == s[i - 1]) ++cnt ; else {
                // ans = max(ans , cnt - 1) ; 
                ans = max(ans , min(mp[s[i - 1] - 'a'] , cnt)) ; 
                mp[s[i - 1] - 'a'] = max(cnt , mp[s[i - 1] - 'a']) ; 
            }
    }

    cout << ans << '\n' ; 
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("xaucon") 

    int t ;
    cin >> t ;

    while(t--) {
        solve() ; 
    }

    return 0 ;
}

