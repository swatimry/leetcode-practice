class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        n=len(nums)
        i=0
        for i in range(0,n):
            for j in range(i+1,n):
                if nums[i]+nums[j]==target:
                    return [i,j]
                     