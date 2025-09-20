#include <bits/stdc++.h>
using namespace std;

/*
  given a set of coins {c1, c2, c3, ...  ck}
  sum of money          n
  TODO: form sum n using as few coins as possible -> count possible solutions
  
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
  int n = 5;
  
  vector<int> count(n + 1, 0);
  count[0] = 1;
  
  for (int x = 1; x <= n; x++) {
    for (int c : coins) {
      if (x - c >= 0) { // if its positive its good
        count[x] += count[x - c];
      }
    }
  }
  
  cout << "number of ways: " <<  count[n] << endl;

  return 0;
}
