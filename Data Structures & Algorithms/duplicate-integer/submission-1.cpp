class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> n_set;
        for (int n: nums)
        {
            if (++n_set[n] == 2)
                return (true);
        }
        return (false);
    }
};