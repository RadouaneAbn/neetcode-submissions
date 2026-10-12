class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> res;
        for (int i: nums) res[i]++;

        vector<vector<int>> buckets(nums.size() + 1);
        for (auto it: res) buckets[it.second].push_back(it.first);

        vector<int> result;
        for (int i = nums.size(); i > 0 && result.size() < k; i--)
        {
            if (buckets[i].size() != 0)
                result.insert(result.end(), buckets[i].begin(), buckets[i].end());
        }
        return (result);
    }
};
