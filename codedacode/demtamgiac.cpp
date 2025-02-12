#include<bits/stdc++.h>
#define file(name) if (fopen(name".inp", "r"))  freopen(name".inp", "r", stdin), freopen(name".out", "w", stdout) ; 
#define fo(i , m , n) for (int i = m ; i <= n ; i++)
#define fd(i , m , n) for (int i = m ; i >= n ; i--)
#define ll long long
#define pb push_back 
#define ii pair<ll, ll>
#define db long double 
using namespace std ; 

ll a , b , m , n ; 

bool check(ll a , ll b , ll c) {
    return (a + b > c && b + c > a && a + c > b) ; 
}

int main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 
    
    cin >> a >> b >> m >> n ; 

    ll t = b , i = 0 , div = 1 ; 
    vector<ii> arr ; unordered_map<int ,int> visited ; 
    vector<int> loop ; 
 
    while(1) {
        if (!visited[t]) {
            visited[t] = ++i ; 
            loop.pb(t) ; 
            t = (a * t + b) % m + 1 ; 
        } else {
            div = visited[t] ; 
            break ;
        }
    }
 
    ll dodaichuki = loop.size() - div + 1 ; 
 
    fo(i , 1 , min(div - 1 , n)) arr.pb({loop[i - 1] , 1}) ; 

    
    n -= div - 1 ; 
    if (n > 0) {
        for(int i = div ; i <= loop.size() ; ++i) {
            ll x = n , sum = 0 ;
            int vitrixuathientrongchuki = i - div + 1 ;  
            sum = x / dodaichuki ;  
            x %= dodaichuki ; 
            sum += (vitrixuathientrongchuki <= x) ; 

            if (sum > 0) arr.pb({loop[i - 1] , sum}) ; 
        }
    }

    sort(arr.begin() , arr.end()) ; ll ans = 0 ; 

    // for(auto x : arr) {
    //     cout << x.first << ' ' << x.second << '\n' ; 
    // }

    for(auto x : arr) {
        ll i = x.first , j = x.second ; 

        if (j >= 2) {
            ll k = 2 * i ;

            // cout << k << '\n' ;   

            ii ab = {k , 0} ; 
            ll v = upper_bound(arr.begin() , arr.end() , ab) - arr.begin() ; 
            v-- ; 
            ans += v ; 
        }
        if (j >= 3) ++ans ; 
    }

    for(ll i = 0 ; i < arr.size() - 1 ; ++i) 
        for(ll j = 0 ; j < i ; ++j) {
            ll x = arr[i].first - arr[j].first ; 
            ll y = arr[i].first + arr[j].first ; 
            ii ab = {x , 0} ; 
            ll vt1 = upper_bound(arr.begin() + i + 1 , arr.end() , ab) - arr.begin() ; 
            ab = {y , 0} ; 
            ll vt2 = upper_bound(arr.begin() + i + 1 , arr.end() , ab) - arr.begin() ;
            vt2-- ; 

            if (arr[vt2] >= arr[vt1]) ans += vt2 - vt1 + 1 ; 
        }

    // for(int i = 0 ; i < arr.size() ; ++i) 
    //     for(int j = i + 1 ; j < arr.size() ; ++j) 
    //         for(int k = j + 1 ; k < arr.size() ; ++k) 
    //             ans += check(arr[i].first , arr[j].first , arr[k].first) ; 

    cout << ans << '\n' ; 

    return 0 ;
}