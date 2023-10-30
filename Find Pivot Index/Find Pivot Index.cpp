#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int pivotIndex(vector<int>& nums) {
    int total = accumulate(nums.begin(), nums.end(), 0);
    int left_sum = 0;
    
    for (int index = 0; index < nums.size(); ++index) {
        if (left_sum == total - left_sum - nums[index]) {
            return index;
        }
        left_sum += nums[index];
    }
    
    return -1;
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int result = pivotIndex(nums);
    
    cout << "Pivot index: " << result << endl;
    
    return 0;
}


