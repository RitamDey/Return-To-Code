class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        To move all the zeros to the end, what we can do is use 2 pointers, one pointing to the current element and another a insert position
        When the j pointer encounters a non-zero element, it moves to the element to the beginning.
        """
        length = len(nums)
        i, j = 0, 0

        while j < length:
            if nums[j] != 0:
                nums[i] = nums[j]
                i += 1
            j += 1
        
        while i < length:
            nums[i] = 0
            i += 1
