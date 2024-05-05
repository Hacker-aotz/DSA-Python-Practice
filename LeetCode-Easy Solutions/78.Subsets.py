class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        result=[]
        
        subset=[]
        def dfs(i):
            if i>=len(nums):
                return result.append(subset.copy())
            
            subset.append(nums[i])
            dfs(i+1)
            
            subset.pop()
            dfs(i+1)
            
        dfs(0)
        return result
        