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
  
  this works but is exponential in time...
*/
vector<int> coins{1, 3, 4};

int solve(int x) {
  if (x <= 0) return 0;
  
  int best = INT_MAX;
  for(int c : coins) {
    if (x - c >= 0) {  // skip negatives
      best = min(best, solve(x - c) + 1);
    }
  }
  return best;
}
int main() {
  cout << solve(10);
  return 0;
}
