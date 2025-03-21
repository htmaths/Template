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

vector<int> a , prim ; 

void Prime(int x) {
    vector<int> prime(x + 10 , 1) ; 
    prime[0] = prime[1] = 0 ; 

    for(int i = 2 ; i * i <= x ; ++i)
        if (prime[i]) for(int j = i * i ; j <= x ; j += i) prime[j] = 0 ; 

    for(int i = 2 ; i <= x ; ++i) if (prime[i]) prim.pb(i) ; 
}

void pttsnt(vector<int> &tsnt , int n) {
    if(n < 2) return ;
    for (int p : prim) {
        if ((ll)p * p > n) break ;
        if (n % p == 0) {
            tsnt.pb(p) ;
            while(n % p == 0)
                n /= p ;
        }
    }
    if(n > 1) tsnt.pb(n) ;
    return ; 
}

int mp[maxn] ; 

signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 

    string s ; cin >> s ; s = s + ' ' ;  

    string tam = "" ; 
    for(auto ch : s) if (isdigit(ch)) tam += ch ; else {
        if (tam.size()) a.pb(stoi(tam)) ; 
        tam = "" ; 
    }

    int Max = 0 ; 
    for(auto x : a) Max = max(Max , x) ; 

    Prime(sqrt(Max)) ; 

    vector<vector<int>> fac(a.size()) ;
    for (int i = 0 ; i < a.size() ; i++) {
        pttsnt(fac[i] , a[i]) ;
    }

    int l = 0 , ans = 0 ; 

    for(int r = 0 ; r < a.size() ; ++r) {
        bool xdot = 0 ;
        for (int p : fac[r]) {
            if (mp[p] > 0) { 
                xdot = 1 ;
                break ;
            }
        }

        while (xdot && l <= r) {
            for (int p : fac[l])
                mp[p]-- ;

            l++ ;
            xdot = 0 ;
            for (int p : fac[r]) {
                if (mp[p] > 0) {
                    xdot = 1 ;
                    break ;
                }
            }
        }

        for (int p : fac[r]) mp[p]++ ;

        ans = max(ans , r - l + 1) ;
    }

    cout << ans ; 

    return 0 ;
}

