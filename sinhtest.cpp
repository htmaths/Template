#include <bits/stdc++.h>
using namespace std;
#define ll long long
const string NAME = "ht";

mt19937_64 rd(chrono::steady_clock::now().time_since_epoch().count()) ;
#define rand rd

ll Rand(ll L , ll R) {
    assert(L <= R) ;
    return L + rd() % (R - L + 1) ;
}

int main()
{
    srand(time(0)) ;
    for (int iTest = 1 ; iTest <= 100 ; iTest++)
    {
        ofstream inp((NAME + ".inp").c_str()) ;
        inp << Rand(1 , 10) ;
        inp.close() ;
        system((NAME + ".exe").c_str()) ;
        system((NAME + "_trau.exe").c_str()) ;
        if (system(("fc " + NAME + ".out " + NAME + ".ans").c_str()) != 0)
        {
            cerr << "Test " << iTest << ": WRONG!\n" ;
            return 0; 
        }
        cerr << "Test " << iTest << ": CORRECT!\n" ;
    }
    return 0 ; 
}