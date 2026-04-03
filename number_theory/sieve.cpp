#include <bits/stdc++.h>
using namespace std;

/* 
Sieve is used to find prime numbers. Actually it builds up information about numbers, are they prime, or do they have prime factor/divisor.
if sieve[i] == 0 then number is prime, if sieve[i] != 0 then value is prime divisor. 

 print first n prime numbers:
*/

int main() {
    int n = 1000;
    vector<int> sieve(n, 0);
    for (int x = 2; x < n; x++) {
      if (sieve[x]) continue;  // if (0) false.    if (5) true;
      
      for (int u = 2*x; u < n; u += x) {
        sieve[u] = x;
      }
    }
    
    for (int i = 0; i < n; i++) {
      if (sieve[i] == 0) cout << i << " "; 
    }
    return 0;
}


