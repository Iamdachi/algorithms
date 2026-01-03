#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // e = “times ten to the power of …”
    // 2e5 = 200000 (2 × 10⁵) 
    // 1e6 = 1000000 (1 × 10⁶)
    
    int n; // 32 bit signed ===>  +/- 2^31  ≈  2e9
    // for indices, count
    // use by default unless constraint
    
    long long x; // 64-bit signed ====>  2^63 ≈  9e18
    // sums and products of ints might overflow.
    // prefix sums, dp values, answers
    
    
    int a, b;
    int c = a * b;   // might overflow
    long long c = 1LL * a * b; // correct

    // 998244353 = 119 × 2^23 + 1  (Has form k·2^n + 1)
    const int MOD = 998244353;

    return 0;
}

