class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        seen_dict = {}
        for p, i in enumerate(nums):
            # We don't need a call to abs() because p will always be greater than the recorded value
            if i in seen_dict and p - seen_dict[i] <= k:
                return True
            else:
                seen_dict[i] = p
        
        return False
