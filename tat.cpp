#include<bits/stdc++.h>
#define file(name) if (fopen(name".inp", "r")) freopen(name".inp", "r", stdin), freopen(name".out", "w", stdout) ; 
#define ll long long
#define bit(x, i) ((x >> i) & 1)
#define pb push_back
using namespace std ; 

const int maxn = 1e4 + 10 ; 
const ll base = 131 ; 
const ll MOD = 1e9 + 7 ;
const int INF = 2e9 ; 

int n;
int a[15], f[15][1 << 15], c[15][1 << 15];

int calc(int add, int cur){
    if (add == 0) return 2 * (cur + 1);

    if (add <= cur) return 2;

    return 2 + 2 * add - 2 * cur;
}
signed main() {
    cin.tie(0) -> sync_with_stdio(0) ; 
    file("ht") 
    
    while (cin >>n && n){
        memset(f, 0, sizeof f);
        memset(c, 0, sizeof c);

        for (int i = 0; i < n; ++i) cin >>a[i];

        for (int i = 0; i < n; ++i){
            f[i][1 << i] = calc(0, a[i]);
            c[i][1 << i] = 1;
        }


        for (int mask = 0; mask < 1 << n; ++mask)
            for (int i = 0; i < n; ++i){
                if (bit(mask, i) == 0) continue;

                for (int j = 0; j < n; ++j){
                    if (bit(mask, j)) continue;

                    int cmask = mask | (1 << j);

                    if (f[j][cmask] == f[i][mask] + calc(a[j], a[i]))
                        c[j][cmask] += c[i][mask];

                    f[j][cmask] = max(f[j][cmask], f[i][mask] + calc(a[j], a[i]));
                }
            }

        int ans = 0, cnt = 0;

        for (int i = 0; i < n; ++i)
            if (ans < f[i][(1 << n) - 1]){
                cnt = c[i][(1 << n) - 1];
                ans = f[i][(1 << n) - 1];
            }

        for (int i = 0; i < n; ++i){
            for (int mask = 0; mask < 1 << n; ++mask) cout <<c[i][mask] <<' ';

            cout <<'\n';
        }

        // cout <<ans <<' ' <<cnt <<'\n';
    }

    return 0 ;
}

