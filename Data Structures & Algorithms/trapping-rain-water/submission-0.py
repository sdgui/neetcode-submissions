class Solution:
    def trap(self, height: List[int]) -> int:
        water=0
        for i in range(1,len(height)-1):
            prefix=height[:i]
            suffix=height[i:]
            if min(max(prefix), max(suffix))-height[i]>0:
                water+=min(max(prefix), max(suffix))-height[i]
        return water
        