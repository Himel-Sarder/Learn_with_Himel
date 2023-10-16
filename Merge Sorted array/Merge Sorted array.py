"""
Problem
-------
Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

Example 2:

Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].

Example 3:

Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. 
The 0 is only there to ensure the merge result can fit in nums1.

-------------------------
| Prepared by -         |
| Himel Sarder          |
| Dept. of CSE, BSFMSTU |
-------------------------
"""
#Technic 1
def merge(nums1, m, nums2, n):
    for i in range(n):
        nums1[i+m]=nums2[i]
    nums1.sort()

    return nums1

nums1 = [1, 2, 3, 0, 0, 0]
m = 3
nums2 = [2, 5, 6]
n = 3

merge_result = merge(nums1, m, nums2, n)
print(merge_result)




#Technic 2

def merge(nums1, m, nums2, n):
# Remove extra zeros from both arrays
        nums1 = [x for x in nums1 if x != 0]
        nums2 = [x for x in nums2 if x != 0]
        # Merge the arrays
        merge_nums = nums1 + nums2
        merge_nums.sort()

        return nums1

nums1 = [1, 2, 3, 0, 0, 0]
m = 3
nums2 = [2, 5, 6]
n = 3

merge_result = merge(nums1, m, nums2, n)
print(merge_result)
