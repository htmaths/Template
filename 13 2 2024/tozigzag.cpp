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

int n , a[maxn] ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    cin >> n ; 

    for(int i = 1 ; i <= n ; ++i) cin >> a[i] ; 

    sort(a + 1 , a + 1 + n) ; 

    vector<int> ans ; 

    for(int i = 1 ; i <= (n / 2) ; ++i) ans.pb(a[i]) , ans.pb(a[n - i + 1]) ; 

    if (n & 1) ans.pb(a[n / 2 + 1]) ; 

    for(auto &x : ans) cout << x << ' ' ; 

    return 0 ;
}

