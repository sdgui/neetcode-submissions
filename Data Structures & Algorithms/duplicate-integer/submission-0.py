class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        numsCount={}
        for n in nums:
            if n in numsCount.keys():
                 return True
            numsCount[n]=1

        return False 