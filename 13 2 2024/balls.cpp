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

int n , a[maxn] ; unordered_map<int ,int> mp ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    cin >> n ; 

    for(int i = 1 ; i <= n ; ++i) cin >> a[i] , mp[a[i]]++ ;

    ll cnt = 0 ; 

    for(auto [x1 , x2] : mp) {
        if (x2 >= 2) cnt += x2 * (x2 - 1) / 2 ; 
    }

    for(int i = 1 ; i <= n ; ++i) {
        int x = mp[a[i]] ; 

        if (x >= 2) cout << cnt - (x - 1) << '\n' ; else cout << cnt << '\n' ; 
    } 


    return 0 ;
}

