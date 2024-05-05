nums = [-1, -2, 0, 1, 3, 5, 9, 12]
target = 2


class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums)-1
        while l <= r:
            mid = (l+r)//2
            if nums[mid] < target:
                l = mid+1
            elif nums[mid] > target:
                r = mid-1
            else:
                return mid
        return -1


"""if (year%4==0 and year%100!=0):
  print("Leap year")
elif (year%400==0):
  print("Leap year")
else:
  print("Not leap year")"""
