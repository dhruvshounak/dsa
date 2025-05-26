#Contains Duplicate problem
"""Given an integer array nums,
return true if any value appears more than 
once in the array, otherwise return false. """

class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        for i in range(len(nums)):
            a = nums[i]
            for j in range(len(nums)):
                if nums[j] == a and j != i:
                    return True
        return False


#o(n)^2 time complexity
#best case is o(n) using hashsets, will revisit after studying hash