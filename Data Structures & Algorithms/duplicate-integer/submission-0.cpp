class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> n_set;
        for (int n: nums) if (n_set.insert(n).second == false) return (true);
        return (false);
    }
};