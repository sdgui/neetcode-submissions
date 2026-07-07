class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> solutions;
        sort(nums.begin(), nums.end());
        set <vector<int>> addedSols;
        for (int k = 0; k < nums.size()-2; k++) {
            int i = k+1;
            int j = nums.size() - 1;
            loop:
            int sum = nums[i] + nums[k] + nums[j];
            bool found = true;
            while (sum != 0) {

                if (sum > 0) {
                    j--;
                    if (j<=k || j<=i){
                        found=false;
                        break;
                    }
                } 
                else {
                    i++;
                    if (i>=j){
                        found=false;
                        break;
                    }
                }
                
                sum = nums[i] + nums[k] + nums[j];
            }
            if (found) {
                vector<int> sol = {nums[k], nums[i], nums[j]};
                sort(sol.begin(), sol.end());
                if (addedSols.find(sol)  == addedSols.end()){
                    solutions.push_back(sol);
                    addedSols.insert(sol);
                }
                if (i!=j-1){
                    i++;
                    goto loop;
                }

            }
        }
        return solutions;
    }



};
