class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int last = nums.size(), prev = 1;
        vector<int> result(last);
        result[0] = 1;
        for (int i = 1; i < last; i++)
            result[i] = result[i-1] * nums[i-1];
        prev = 1;
        for (int i = last - 1; i >= 0; i--)
            result[i] *= prev, prev *= nums[i];
        return (result);
    }
};
