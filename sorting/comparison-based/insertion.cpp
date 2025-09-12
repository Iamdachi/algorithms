#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> & nums) {
  // select a number[i] and insert it into the correct position in the sorted partition [0 .. i]
  for(int i = 0; i < nums.size(); i ++) { 
    // i delimits unsorted part of array
    for (int j = i; j > 0; j--) {
        while (nums[j] < nums[j - 1]) {
          // just swap
          int tmp = nums[ j - 1];
          nums[j - 1] = nums[j];
          nums[j] = tmp;
        }
    }
  }
}

int main() {
  vector<int> nums{8, 5, 2, 3, 1};
  for (auto x : nums) cout << x << " "; 
  insertionSort(nums);
  cout << endl;
  for (auto x : nums) cout << x << " ";
}
