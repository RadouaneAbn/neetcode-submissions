class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() < 2)
            return {};
        std::unordered_map<int, int> m;
        int i = 0, diff = 0, x;
        for (i = 0; i < nums.size(); i++)
        {
            diff = target - nums[i];
            if (m.contains(diff))
            {
                return {m[diff], i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};
