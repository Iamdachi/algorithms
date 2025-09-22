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
  
  vector<bool> possible(W + 1, false);
  possible[0] = true;
  
  for(int k = 0; k < n; k++) {
    for(int x = W - w[k]; x >= 0; x--) {
      if (possible[x]) possible[x+w[k]] = true;
    }
  }
  cout << "possible weights" << endl;
  for (int x = 0; x <= W; x++) if (possible[x]) cout << x << " "; 

  return 0;
}
