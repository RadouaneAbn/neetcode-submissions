class Solution {
public:

    string encode_helper(const string& s) {
        string encoded = to_string(s.length()) + string("#");
        return (encoded);
    }

    string encode(vector<string>& strs) {
        string s;
        for (string& str: strs) {
            s += encode_helper(str) + str;
        }
        return (s);
    }

    int get_length(string &s, int &i)
    {
        int j = i;
        while (s[i] != '#') i++;
        return stoi(s.substr(j, i - j));
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0;
        while (i < s.length()) {
            int len = get_length(s, i);
            strs.push_back(s.substr(i + 1, len));
            i += len + 1;
        }
        return strs;
    }
};