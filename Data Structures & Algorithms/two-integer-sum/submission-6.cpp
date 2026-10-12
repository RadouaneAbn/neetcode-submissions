class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() < 2)
            return {};
        std::unordered_map<int, int> m;
        m.reserve(nums.size());
        std::unordered_map<int, int>::iterator mit;
        int i = 0, diff = 0, x;
        for (i = 0; i < nums.size(); i++)
        {
            diff = target - nums[i];
            mit = m.find(diff);
            if (mit != m.end())
                return {mit->second, i};
            m[nums[i]] = i;
        }
        return {};
    }
};
