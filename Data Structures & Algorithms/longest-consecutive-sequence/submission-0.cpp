#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <unordered_set>


using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int max = 0;

        s.insert(nums.begin(), nums.end());

        for (auto n: nums) {
            if (s.find(n - 1) == s.end()) {
                int l = 1;
                while (s.find(n + l) != s.end()) {
                    l++;
                }
                if (l > max)
                    max = l;
            }
        }
        
        return max;
    }
};