#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> & nums) {
  // select a smallest number from unsorted [i ... n] and append to the sorted partition [0 .. i]
  for(int i = 0; i < nums.size(); i ++) { 
    // i delimits unsorted part of array
    int smallestIndex = 0;
    int smallestNumber = INT_MAX;
    for (int j = i; j < nums.size(); j++) {
        if (nums[j] < smallestNumber) {
          smallestNumber = nums[j];
          smallestIndex = j;
        }
    }
    // just swap with [i], i.e. append to the sorted.
    int tmp = nums[smallestIndex];
    nums[smallestIndex] = nums[i];
    nums[i] = tmp;
  }
}

int main() {
  vector<int> nums{8, 5, 2, 3, 1};
  for (auto x : nums) cout << x << " "; 
  selectionSort(nums);
  cout << endl;
  for (auto x : nums) cout << x << " ";
}
