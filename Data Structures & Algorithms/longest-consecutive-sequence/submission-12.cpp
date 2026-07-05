class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> in_nums(nums.begin(), nums.end());

        int longest = 0;

        for (int num : in_nums) {
            if (!in_nums.contains(num - 1)) {
                int length = 1;

                while (in_nums.contains(num + length)) {
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};