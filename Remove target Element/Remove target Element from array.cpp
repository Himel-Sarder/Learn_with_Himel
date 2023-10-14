#include <iostream>
#include <vector>

using namespace std;

void remove(vector<int>& nums, int target) {
    if (nums.empty()) {
        return;
    }

    int i = 0;

    while (i < nums.size()) {
        if (nums[i] == target) {
            nums.erase(nums.begin() + i);
        } else {
            i++;
        }
    }
}

int main() {
    // Example 1
    vector<int> nums1 = {0, 1, 2, 2, 3, 0, 4, 2};
    int target1 = 2;
    remove(nums1, target1);

    cout << "["; // Start with an opening square bracket

    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i]; // Print the current number

        if (i < nums1.size() - 1) {
            cout << ", "; // Add a comma and space if it's not the last element
        }
    }

    cout << "]" << endl; // End with a closing square bracket and newline

    // Example 2
    vector<int> nums2 = {3, 2, 2, 3};
    int target2 = 3;
    remove(nums2, target2);

    cout << "["; // Start with an opening square bracket

    for (int i = 0; i < nums2.size(); i++) {
        cout << nums2[i]; // Print the current number

        if (i < nums2.size() - 1) {
            cout << ", "; // Add a comma and space if it's not the last element
        }
    }

    cout << "]" << endl; // End with a closing square bracket and newline

    return 0;
}

-------------------------
| Prepared by -         |
| Himel Sarder          |
| Dept. of CSE, BSFMSTU |
-------------------------
