#include<bits/stdc++.h>
#define file(name) if (fopen(name".inp", "r")) freopen(name".inp", "r", stdin), freopen(name".out", "w", stdout) ; 
#define ll long long
#define bit(i , x) ((x >> i) & 1)
#define pb push_back
using namespace std ; 

const int maxn = 1e4 + 10 ; 
const ll base = 131 ; 
const ll MOD = 1e9 + 7 ;
const int INF = 2e9 ; 

int n , k ; 
int a[maxn], b[maxn], c[maxn], d[maxn];
signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    cin >> n >> k ; 

    for(int i = 1; i <= n; ++i) cin >>a[i];
    for(int i = 1; i <= n; ++i) cin >>b[i];
    for(int i = 1; i <= n; ++i) cin >>c[i];
    for(int i = 1; i <= n; ++i) cin >>d[i];

    vector<int> s, t;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            s.pb(a[i] + b[j]);

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            t.pb(c[i] + d[j]);

    sort(s.begin(), s.end());

    ll ans = 0;

    for (int x: t)
        ans += upper_bound(s.begin(), s.end(), k - x) - lower_bound(s.begin(), s.end(), k - x);

    cout << ans ; 

    return 0 ;
}