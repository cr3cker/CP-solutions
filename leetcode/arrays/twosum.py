class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mydict = dict()
        for i in range(len(nums)):
            if target - nums[i] in mydict:
                return [i, mydict[target - nums[i]]]
            mydict[nums[i]] = i


