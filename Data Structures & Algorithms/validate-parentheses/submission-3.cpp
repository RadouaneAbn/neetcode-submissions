class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stk;
        for (char c: s) {
            if (c == '[' || c == '(' || c == '{')
                stk.push(c);
            else {
                if (stk.size() == 0)
                    return (false);
                if (c == ']' && stk.top() == '[')
                    stk.pop();
                else if (c == '}' && stk.top() == '{')
                    stk.pop();
                else if (c == ')' && stk.top() == '(')
                    stk.pop();
                else
                    return (false);
            }
        }
        if (stk.size() != 0)
            return (false);
        return (true);
    }
};
