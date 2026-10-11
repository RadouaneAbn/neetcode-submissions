class Solution {
public:
    bool isAnagram(string s, string t) {
        int i, arr[26] = {0};
        if (s.length() != t.length())
            return (false);

        for (i = 0; i < s.length(); i++)
        {
            arr[s[i] % 26]++;
            arr[t[i] % 26]--;
        }

        for (int c: arr) if (c) return (false);

        return (true);
    }
};
