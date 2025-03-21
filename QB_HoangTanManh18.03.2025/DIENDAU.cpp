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

int n ;
string s ;
ll target , ans = 0 ;

void Try(int idx , ll cur_sum , ll cur_num , bool dau) {
    if (idx == n) {
        if (cur_sum + cur_num == target) ans++ ;
        return ;
    }
    int d = s[idx] - '0' ;
    ll new_cur_num = (dau ? cur_num * 10 + d : cur_num * 10 - d) ;
    Try(idx + 1 , cur_sum , new_cur_num , dau) ;
    Try(idx + 1 , cur_sum + cur_num , d , 1) ;
    Try(idx + 1 , cur_sum + cur_num , -d , 0) ;
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    cin >> s >> target ;
    n = s.size() ;
    
    Try(1 , 0 , s[0] - '0' , 1) ;
    
    cout << ans ;

    return 0 ;
}

    