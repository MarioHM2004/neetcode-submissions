class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        m = {}

        for i, x in enumerate(nums):
            complement = target - nums[i]

            if complement in m:
                return [m[complement], i]

            m[x] = i
            
        