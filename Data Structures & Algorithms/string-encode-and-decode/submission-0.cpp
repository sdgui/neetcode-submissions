class Solution {
public:

    string encode(vector<string>& strs) {
        string str;
        for (string s: strs){
            str+=s;
            str+='\0';
        }
        return str;
    }

    vector<string> decode(string s) {
        return split(s,'\0');
    }


    vector<string> split(string s, char delimiter) {
        vector<string> result;
        stringstream ss(s);
        string part;

        while (getline(ss, part, delimiter)) {
            result.push_back(part);
        }

        return result;
    }
};
