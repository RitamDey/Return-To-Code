class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        length = len(numbers)
        l = 0
        r = length - 1

        while l < r:
            s = numbers[l] + numbers[r]
            if s == target:
                return l+1, r+1
            elif s > target:
                r -= 1
            else:
                l += 1
        
        pass
