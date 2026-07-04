class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<int,vector<string>> numofChars;
        vector<vector<string>> final;
        for (int i=0; i<strs.size(); i++){
            numofChars[strs[i].length()].push_back(strs[i]);
        }
        for (auto pair: numofChars){
            vector<string> lst=pair.second;
            vector<int[26]> counts(lst.size());
            unordered_map<int, vector<string>> groups; 
            for (int i=0; i<lst.size(); i++){
                for (char a: lst[i]){
                    counts[i][a-'a'] += 1; 
                }
                bool found=false;
                for (int j=0; j<i; j++){
                    if (sameCounts(counts[i], counts[j])){
                        groups[j].push_back(lst[i]);
                        found=true;
                        break;
                    }
                }
                if (!found){
                    vector<string>group={lst[i]};
                    groups[i]=group;
                }
            }
            for (auto mapGroup: groups){
                final.push_back(mapGroup.second);
            }
        }
        return final;
    }

    bool sameCounts(int a[], int b[]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
};
