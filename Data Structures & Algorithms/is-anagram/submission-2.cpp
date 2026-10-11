#include <map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return (false);
        std::map<char, int> sc, tc;
        for (int i = 0; i < s.size(); i++)
            sc[s[i]]++;
        for (int i = 0; i < t.size(); i++)
            tc[t[i]]++;
        std::map<char, int>::iterator sit = sc.begin();
        std::map<char, int>::iterator tit = tc.begin();
        while (sit != sc.end())
        {
            if ((sit->first != tit->first) || (sit->second != tit->second))
                return (false);
            sit++;
            tit++;
        }

        return (true);
    }
};
