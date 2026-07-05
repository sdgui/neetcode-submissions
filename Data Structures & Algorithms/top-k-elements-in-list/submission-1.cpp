class Solution {
public:
    vector<int> topKFrequent(vector<int>&nums, int k) {
        vector<vector<int>> buckets(nums.size());
        unordered_map<int, int> frequencies;
        vector<int> sol;
        for (int i=0; i<nums.size(); i++){
            frequencies[nums[i]]++;
        }
        for (auto pair: frequencies){
            buckets[pair.second-1].push_back(pair.first);
        }
        for (int i=nums.size()-1; i>=0; i--){
            if (!buckets[i].empty()){
                sol.insert(sol.end(), buckets[i].begin(), buckets[i].end()); 
                k-=buckets[i].size();
                if (k<=0) return sol;
            }
        }
        return sol;
    }
};
