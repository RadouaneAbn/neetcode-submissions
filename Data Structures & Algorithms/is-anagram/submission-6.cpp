#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        int i;
        if (s.length() != t.length())
            return (false);

        int arr[26] = {0};

        for (i = 0; i < s.length(); i++)
        {
            arr[s[i] % 26]++;
            arr[t[i] % 26]--;
        }

        for (i = 0; i < 26; i++)
            if (arr[i])
                return (false);

        return (true);
    }
};
