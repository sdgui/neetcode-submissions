class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int zeros=0;
        int zeroIndex;
        vector<int> result(nums.size());
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==0 && zeros==0){
                zeroIndex=i;
                zeros++;
                continue;
            }
            if (nums[i]==0 && zeros>0) return result;
            product*=nums[i];
        }


        if (zeros==1) {
            result[zeroIndex]=product;
            return result;
        }

        for (int i=0; i<nums.size(); i++){
            if (nums[i]!=0)
                result[i]=product/nums[i];
            else result[i]=product;
        }
        return result;
    }
};
