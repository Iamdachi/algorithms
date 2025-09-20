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
*/
vector<int> coins{1, 3, 4};

vector<bool> ready;
vector<int>  value;

int solve(int x) {
  if (x <= 0) return 0;
  if (ready[x]) return value[x]; // MEMOIZATION
  
  int best = INT_MAX;
  for(int c : coins) {
    if (x - c >= 0) {  // skip negatives
      best = min(best, solve(x - c) + 1);
    }
  }
  value[x] = best; // MEMOIZATION
  ready[x] = true;
  return best;
}
int main() {
  int n = 10;
  value.assign(n + 1, 0);
  ready.assign(n + 1, false);

  cout << solve(n);
  return 0;
}
