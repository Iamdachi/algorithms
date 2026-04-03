#include <bits/stdc++.h>
using namespace std;

/* 
Greatest common divisor
gcd(a,b) = gcd(a, a%b)
*/

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
    cout << gcd(24, 36);
    return 0;
}
