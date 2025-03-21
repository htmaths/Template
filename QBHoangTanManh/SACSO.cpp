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

int n , q ; string s ;  

struct query{
    int ty , l , r ; char ch ; 
} a[maxn] ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("SACSO") 

    cin >> n >> q >> s ;

    int pre[n + 1] ; 

    pre[0] = 1 ; 

    for(int i = 1 ; i < n ; ++i) {
        pre[i] = pre[i - 1] ; 
        if (s[i] != s[i - 1]) pre[i]++ ; 
    }

    int t = 1 ; 

    for(int i = 1 ; i <= q ; ++i) {
        string x ; cin >> x ; int l , r ; cin >> l >> r ; 

        a[i].l = l ; 
        a[i].r = r ; 

        if (x == "get") {
            a[i].ty = 1 ; 
        } else {
            t = 0 ; 
            a[i].ty = 2 ; 
            char ch ; 
            cin >> ch ; 
            a[i].ch = ch ; 
        }
    }

    if (t == 1) {
        for(int i = 1 ; i <= q ; ++i) {
            int l = a[i].l , r = a[i].r ; 
            l-- ; r--;

            cout << pre[r] - pre[l] + 1 << '\n' ; 
        }

        return 0 ; 
    } else {
        for(int i = 1 ; i <= q ; ++i) {

            int l = a[i].l , r = a[i].r ; char x = a[i].ch ;  

            if (a[i].ty == 2) {
                for(int j = l ; j <= r ; ++j) s[j - 1] = x ; 
            } else {
                int ans = 1 ;

                for(int j = l + 1 ; j <= r ; ++j)
                    if (s[j - 1] != s[j - 2]) ++ans  ; 

                cout << ans << '\n' ; 
            }
        }

        return 0 ; 
    }

    return 0 ;
}

