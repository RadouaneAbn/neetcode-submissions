class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() < 2)
            return {};
        std::unordered_map<int, int> m;
        std::unordered_map<int, int>::iterator mit;
        m.reserve(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            mit = m.find(target - nums[i]);
            if (mit != m.end())
                return {mit->second, i};
            m.insert({ nums[i], i });
        }
        return {};
    }
};
