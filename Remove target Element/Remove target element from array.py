"""
Problem
--------
Input: 
nums = [0,1,2,2,3,0,4,2], target = 2

Output: nums = [0,1,4,0,3]

Input: 
nums = [3,2,2,3], target = 3

Output: nums = [2,2]

-------------------------
| Prepared by -         |
| Himel Sarder          |
| Dept. of CSE, BSFMSTU |
-------------------------
"""
def remove(nums):
    if not nums:
        return 0

    i = 0

    while i < len(nums):
        if nums[i] == target:
            nums.pop(i)
            
        else:
            i += 1


# Example 1
nums1 = [0,1,2,2,3,0,4,2]
target = 2
k1 = remove(nums1)
print(nums1)  # Output: [0,1,4,0,3]

# Example 2
nums2 = [3,2,2,3]
target = 3
k2 = remove(nums2)
print(nums2)  # Output: [2,2]
