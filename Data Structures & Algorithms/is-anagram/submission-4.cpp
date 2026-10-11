#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return (false);

        std::unordered_map<char, int> counter;

        for (int i = 0; i < s.length(); i++)
            counter[s[i]]++;
        for (int i = 0; i < t.length(); i++)
            if (--counter[t[i]] < 0)
                return (false);
        return (true);
    }
};
