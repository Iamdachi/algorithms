#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> & nums, int low, int high) {
  int i = low;
  int pivot = nums[high];
  
  for (int j = low; j <= high; j++) {
    if (nums[j] < pivot) {
      swap(nums[i], nums[j]);

      i++;
    }
  }
  swap(nums[i], nums[high]);
  
  return i;  
}

void quickSort(vector<int> & nums, int low, int high) {
  if (low < high) {
    int partition_index = partition(nums, low, high);
    quickSort(nums, low, partition_index-1);
    quickSort(nums, partition_index + 1, high);
  }
}

int main() {
  vector<int> nums{8, 5, 2, 3, 1};
  for (auto x : nums) cout << x << " "; 
  quickSort(nums, 0, nums.size() - 1);
  cout << endl;
  for (auto x : nums) cout << x << " ";
}
