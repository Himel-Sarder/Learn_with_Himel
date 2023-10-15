"""
Problem
-------
Given a sorted array of distinct integers and a target value, 
return the index if the target is found. If not, return the index where it 
would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:
Input: nums = [1,3,5,6], target = 2
Output: 1

Example 3:
Input: nums = [1,3,5,6], target = 7
Output: 4

"""

def Search(nums, target):
        if target in nums:
            return nums.index(target)
        else:
            for i in range(len(nums)-1):
                if nums[i] < target < nums[i+1]:
                    return i+1
                elif target > nums[len(nums)-1]:
                    return len(nums)
            if len(nums) < 2:
                if target > nums[0]:
                    return 1
        return 0
    
    
# Example 1
nums1 = [1,3,5,6]
target1 = 5
position1 = Search(nums1, target1)
print(position1)

# Example 2
nums2 = [1, 3, 5, 6]
target2 = 2
position2 = Search(nums2, target2)
print(position2)

# Example 3
nums3 = [1, 3, 5, 6]
target3 = 7
position3 = Search(nums3, target3)
print(position3)