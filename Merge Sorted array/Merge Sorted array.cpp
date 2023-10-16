#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    // Replace the elements in nums1 starting from index m with the elements from nums2
    nums1.erase(nums1.begin() + m, nums1.end());
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());

    // Sort the merged nums1 array
    sort(nums1.begin(), nums1.end());

    // Print the merged and sorted array
    cout << "[";
    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i];
        if (i < nums1.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}

-------------------------
| Prepared by -         |
| Himel Sarder          |
| Dept. of CSE, BSFMSTU |
-------------------------
