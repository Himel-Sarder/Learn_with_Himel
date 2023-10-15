#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Search(const vector<int>& nums, int target) {
    if (find(nums.begin(), nums.end(), target) != nums.end()) {
        return distance(nums.begin(), find(nums.begin(), nums.end(), target));
    } else {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < target && target < nums[i + 1]) {
                return i + 1;
            } else if (target > nums[nums.size() - 1]) {
                return nums.size();
            }
        }
        if (nums.size() < 2) {
            if (target > nums[0]) {
                return 1;
            }
        }
        return 0;
    }
}

int main() {
    // Example 1
    vector<int> nums1 = {1, 3, 5, 6};
    int target1 = 5;
    int position1 = Search(nums1, target1);
    cout << position1 << endl;

    // Example 2
    vector<int> nums2 = {1, 3, 5, 6};
    int target2 = 2;
    int position2 = Search(nums2, target2);
    cout << position2 << endl;

    // Example 3
    vector<int> nums3 = {1, 3, 5, 6};
    int target3 = 7;
    int position3 = Search(nums3, target3);
    cout << position3 << endl;

    return 0;
}

-------------------------
| Prepared by -         |
| Himel Sarder          |
| Dept. of CSE, BSFMSTU |
-------------------------
