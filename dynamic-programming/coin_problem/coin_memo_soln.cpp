#include <bits/stdc++.h>
using namespace std;

/*
  given a set of coins {c1, c2, c3, ...  ck}
  sum of money          n
  TODO: form sum n using as few coins as possible
  
  example:
  coins = {1, 3, 4}
                                      coins
  solve(x) = min(solve(x - 1) + 1,     1
                 solve(x - 3) + 1,     3
                 solve(x - 4) + 1,     4
                )
  base: solve(0) = 0 - no coins are needed to form empty sum

*/

int main() {
  vector<int> coins{1, 3, 4};
  int n = 10;
  
  vector<int> value(n + 1, INT_MAX);
  vector<int> first(n + 1, INT_MAX);
  value[0] = 0;
  for (int x = 1; x <= n; x++) {
    for (int c : coins) {
      if (x - c >= 0 && value[x - c] + 1 < value[x]) { // instead of min function
        value[x] = value[x - c] + 1;
        first[x] = c;
      }
    }
  }
  
  cout << "min number of coins: " <<  value[n] << endl;
  cout << "salute your solution:" << endl;
  while (n > 0) {
    cout << first[n] << endl;
    n -= first[n];
  }
  return 0;
}
