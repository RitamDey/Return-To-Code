# Optimised solution by Neetcode
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        length = len(nums)
        pos_table = {}
        for i in range(0, length):
            remain = target - nums[i]
            if remain in pos_table:
                return pos_table[remain], i
            pos_table[nums[i]] = i
        pass


# Naive bruteforce solution
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        length = len(nums)

        for i in range(length):
            for j in range(i+1, length):
                if nums[i] + nums[j] == target:
                    return i,j
        
        pass
