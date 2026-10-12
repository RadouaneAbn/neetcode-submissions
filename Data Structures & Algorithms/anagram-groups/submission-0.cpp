class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> res;
        for (int i = 0; i < strs.size(); i++)
        {
            string s = strs[i];
            string key(26, 0);
            for (int j = 0; j < s.length(); j++)
                key[s[j] - 'a']++;
            res[key].push_back(s);
        }
        vector< vector<string> > result;
        for (auto el: res)
        {
            result.push_back(el.second);
        }
        return (result);
    }
};
