class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        n=len(nums)
        hash={}
        for i in range(0,n):
            hash[nums[i]]=i

        for j in range(len(nums)):
            if hash.get(target-nums[j])!=j and  target-nums[j] in hash:
                return[j,hash[target-nums[j]]]   

        return []        