def remove_duplicates(nums):
    # Convert the list to a set to remove duplicates, then convert it back to a list
    unique_nums = list(set(nums))
    return unique_nums

# Example usage
nums = [1, 1, 2, 3, 3, 3, 4, 4, 4]
unique_nums = remove_duplicates(nums)
print(unique_nums)
