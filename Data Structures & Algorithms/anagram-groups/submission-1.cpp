class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> res;
        for (int i = 0; i < strs.size(); i++)
        {
            string key(26, 0);
            for (char c: strs[i])
                key[c - 'a']++;
            res[key].push_back(strs[i]);
        }
        vector< vector<string> > result(res.size());
        int i = 0;
        for (auto el: res)
        {
            result[i] = el.second;
            i++;
        }
        return (result);
    }
};
