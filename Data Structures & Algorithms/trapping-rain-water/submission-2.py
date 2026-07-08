class Solution:
    def trap(self, height: List[int]) -> int:
        prefixMax=0
        prefix=[0]
        for i in range(1,len(height)):
            if height[i-1]>prefixMax:
                prefixMax=height[i-1]
            prefix.append(prefixMax)
        suffixMax=0
        suffix=[0]*len(height)
        for i in range(len(height)-2,0,-1):
            if height[i+1]>suffixMax:
                suffixMax=height[i+1]
            suffix[i]=suffixMax
        totalWater=0
        for i in range(len(height)):
            water= min(prefix[i], suffix[i]) - height[i]   
            if water>0: totalWater+=water
            
        return totalWater