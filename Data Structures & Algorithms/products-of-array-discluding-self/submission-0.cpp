class Solution {
    // void print(char *msg, vector<int> &arr) {
    //     std::cout << msg;
    //     for (auto i: arr) std::cout << i << " ";
    //     std::cout << std::endl;
    // }

public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int last = nums.size();
        vector<int> prefix(last), suffix(last), result(last);
        prefix[0] = 1;
        for (int i = 1; i < last; i++)
            prefix[i] = prefix[i-1] * nums[i-1];
        suffix[last - 1] = 1;
        for (int i = last - 2; i >= 0; i--)
            suffix[i] = suffix[i+1] * nums[i+1];
        for (int i = 0; i < nums.size(); i++)
            result[i] = prefix[i] * suffix[i];

        // print("Array : ", nums);
        // print("Prefix: ", prefix);
        // print("Suffix: ", suffix);
        return (result);
    }
};
