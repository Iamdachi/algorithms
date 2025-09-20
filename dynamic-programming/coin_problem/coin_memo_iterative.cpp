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
  
  use memoization so that each number is calculated once.
  dynamic programming problems are easier imagined as recursive,
  but iterative implementation is shorter and .
*/

int main() {
  vector<int> coins{1, 3, 4};
  int n = 10;
  
  vector<int> value(n + 1, INT_MAX);
  value[0] = 0;
  for(int x = 1; x <= n; x++) {
    for(int c : coins) {
      if(x - c >= 0) {
        value[x] = min(value[x], value[x - c] + 1);
      }
    }
  }
  cout << value[n];
  return 0;
}
