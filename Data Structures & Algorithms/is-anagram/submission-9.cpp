class Solution {
public:
    bool isAnagram(string s, string t) {
        int i;
        char arr[26] = {0};
        if (s.length() != t.length())
            return (false);

        for (i = 0; i < s.length(); i++)
        {
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
        }

        for (char c: arr) if (c) return (false);

        return (true);
    }
};
