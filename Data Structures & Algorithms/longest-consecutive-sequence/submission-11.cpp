class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_set<int> in_nums;
        vector<int> sequence_starts;
        vector<int> sequence_lengths;
        for (int num: nums){
            in_nums.insert(num);
        }
        for (int num: in_nums){
            if (!in_nums.contains(num-1)) sequence_starts.push_back(num);
        }
        for (int num: sequence_starts){
            int i=1;
            while (in_nums.contains(num+i)){
                i++;
            }
            sequence_lengths.push_back(i);
        }
        return *std::max_element(sequence_lengths.begin(), sequence_lengths.end());
    }
};
