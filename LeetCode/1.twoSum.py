class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        prevMap = {}

        for i, n in enumerate(nums):
            diff = target - n
            if diff in prevMap:
                return [prevMap[diff], i]
            prevMap[n] = i
        return

        # for i in range(len(nums)):
        #     for j in range(i+1, len(nums)):
        #         if nums[j] == target-nums[i]:
        #             return [i, j]
