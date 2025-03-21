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

int check(int mid) {
    string x = s.substr(0 , mid) ; 

    // for(int i = mid ; i <= s.size() - mid ; ++i) {
    //     string t = s.substr(i , mid) ; 
    //     if (t == x) return i + 1 ; 
    // }

    auto cur = s.find(x , mid) ; 

    if (cur == string::npos) return 0 ; 

    return cur + 1 ;  
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    cin >> s ; 

    int n = s.size() ; 

    int l = 1 , r = n / 2 , mid , ans = 0 , ps = 1 ;

    while(l <= r) {
        mid = (l + r) >> 1 ; 

        int x = check(mid) ; 

        if (x) {
            ps = x ; 
            ans = mid ; 
            l = mid + 1 ; 
        } else r = mid - 1 ; 
    } 

    cout << ans << ' ' << ps ; 

    return 0 ;
}

