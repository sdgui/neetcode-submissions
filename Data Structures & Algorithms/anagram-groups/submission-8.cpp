class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (string word : strs) {
            int count[26] = {0};

            for (char c : word) {
                count[c - 'a']++;
            }

            string key = "";

            for (int i = 0; i < 26; i++) {
                key += "#" + to_string(count[i]);
            }

            groups[key].push_back(word);
        }

        vector<vector<string>> result;

        for (auto& entry : groups) {
            result.push_back(entry.second);
        }

        return result;
    }
};
