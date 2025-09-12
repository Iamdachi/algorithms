#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> & nums) {
  for(int i = 0; i < nums.size(); i ++) {
    for (int j = 0; j < nums.size() - 1 - i; j++) {
        if (nums[j] > nums[j + 1]) {
          int tmp = nums[ j + 1];
          nums[j + 1] = nums[j];
          nums[j] = tmp;
        }
    }
  }
}

int main() {
  vector<int> nums{8, 5, 2, 3, 1};
  for (auto x : nums) cout << x << " "; 
  bubbleSort(nums);
  cout << endl;
  for (auto x : nums) cout << x << " "; 

}
