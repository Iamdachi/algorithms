#include <bits/stdc++.h>
using namespace std;

/*
  TODO: Given a list of weights [w1, w2, . . . , wn], determine all sums that can be   constructed using the weights
  
  For example, if the weights are [1, 3, 3, 5], the following sums are possible:
  0 1   3 4 5 6 7 8 9   11 12
  
  possible(x, k) = possible(x − wk, k − 1) ∨ possible(x, k − 1)

*/

int main() {
  vector<int> w{1, 3, 3, 5};
  int n = w.size();
  int W = accumulate(w.begin(), w.end(), 0); // total sum
  
  vector<vector<bool>> possible(W + 1, vector<bool>(n + 1, false));
  possible[0][0] = true;
  
  for(int k = 1; k <= n; k++) {
    for(int x = 0; x <= W; x++) {
      if (x - w[k - 1] >= 0) possible[x][k] = possible[x - w[k - 1]][k - 1];
      possible[x][k] = possible[x][k] || possible[x][k - 1];
    }
  }
  cout << "possible weights" << endl;
  for (int i = 0; i <= W; i++) if (possible[i][n]) cout << i << " ";

  return 0;
}
