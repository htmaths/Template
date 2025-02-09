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

int n , x , y , res ; 
pair<int ,int> a[maxn] ; 

void Try(int X , int Y , int cnt1 , int cnt2 , int idx) {
    if (idx > n) {
        if (cnt1 == x && cnt2 == y) res = max(res , X + Y) ; 

        return ; 
    }

    Try(X , Y , cnt1 , cnt2 , idx + 1) ; 
    if (cnt1 < x) Try(X + a[idx].first , Y , cnt1 + 1 , cnt2 , idx + 1) ; 
    if (cnt2 < y) Try(X , Y + a[idx].second , cnt1 , cnt2 + 1 , idx + 1) ; 
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("vannghe") 

    cin >> n >> x >> y ; 

    for(int i = 1 ; i <= n ; ++i) cin >> a[i].first >> a[i].second ; 

    Try(0 , 0 , 0 , 0 , 1) ; 

    cout << res ; 

    return 0 ;
}

