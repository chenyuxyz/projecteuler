#include <cstdio>
#include <cmath>
#include <set>
#define FOR(it,c) for(__typeof((c).begin())it=(c).begin();it!=(c).end();it++)

using namespace std;
typedef long long LL;

// AF(x) = x / (1-x-x^2)
// AF(x) = k => k x^2 + (k+1) x - k = 0
// => det = (k+1)^2 + (2k)^2 is a square number
// one is 2mn and one is m^2-n^2

int main(){
    // brute force
    set<LL> ans;
    LL bdd = 10000;
    for(LL m = 1; m < bdd; m++){
        for(LL n = 1; n < m; n++){
            LL k1 = 2 * m * n;
            LL k2 = m * m - n * n;
            if((k1 - 1) * 2 < k2) continue;
            if((k1 - 1) * 2 == k2) ans.insert(k2 / 2);
            if((k2 - 1) * 2 == k1) ans.insert(k1 / 2);
            if((k2 - 1) * 2 < k1) break;
        }
    }
    int cnt = 1;
    FOR(c, ans) printf("%d %lld\n", cnt++, *c);
    
    // fib series
    LL f1 = 0, f2 = 1;
    for(int i = 0; i < 15; i++){
        f2 = f2 + f1;
        f1 = f2 - f1;
        f2 = f2 + f1;
        f1 = f2 - f1;
        printf("%d %lld\n", i + 1,  f1 * f2);
    }

    return 0;
}

