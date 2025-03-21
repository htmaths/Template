#include<bits/stdc++.h>
#define file(name) if (fopen(name".inp", "r")) freopen(name".inp", "r", stdin), freopen(name".out", "w", stdout) ; 
#define ll long long
#define bit(i , x) ((x >> i) & 1)
#define pb push_back
#define int ll
#define ii pair<int , int>
using namespace std ; 

const int maxn = 1e6 + 10 ; 
const ll base = 131 ; 
const ll MOD = 1e9 + 7 ;
const int INF = 2e9 ; 

struct node{
    int x , y , ps ;
} ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("BAI3") 

    int n , q ; cin >> n >> q ; int pre[n + 1] , a[n + 1] ; 

    pre[0] = 0 ; 

    for(int i = 1 ; i <= n ; ++i) {
        cin >> a[i] ; 
        pre[i] = pre[i - 1] + a[i] ; 
    }

    node k[q + 1] ; 

    for(int i = 1 ; i <= q ; ++i) {
        cin >> k[i].x ; 
        k[i].ps = i ; 
    }

    sort(k + 1 , k + 1 + q , [](node a , node b) {
        return a.x < b.x ; 
    }) ; 

    int j = 0 ; 

    for(int i = 1 ; i <= q ; ++i) {
        while(j < n && a[j + 1] <= k[i].x) ++j ;
        k[i].y = pre[j] ; 
    }

    sort(k + 1 , k + 1 + q , [](node a , node b) {
        return a.ps < b.ps ; 
    }) ; 

    for(int i = 1 ; i <= q ; ++i) cout << k[i].y << '\n' ; 

    return 0 ;
}

