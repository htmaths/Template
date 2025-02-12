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

struct idx {
    int vl , ps ;
    idx() {
        vl = 0 ; 
        ps = 0 ; 
    } 
} ; 

bool operator< (const idx a ,const idx b) {
    return a.vl < b.vl ; 
}

idx a[maxn] , b[maxn] ; 
int n ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    cin >> n ; 

    for(int i = 1 ; i <= n ; ++i) cin >> a[i].vl , a[i].ps = i ; 
    for(int i = 1 ; i <= n ; ++i) cin >> b[i].vl , b[i].ps = i ; 

    sort(a + 1 , a + 1 + n) ; 

    vector<int> save ; int index = 1 ; 
    vector<pair<int ,int>> ans ; 

    for(int i = 1 ; i <= n ; ++i) {
        while(index <= n && b[index].vl < a[i].vl) save.pb(index++) ;


        if (save.size()) {
            ans.pb({a[i].ps , b[save.back()].ps}) ; 
        } 
    }

    return 0 ;
}

