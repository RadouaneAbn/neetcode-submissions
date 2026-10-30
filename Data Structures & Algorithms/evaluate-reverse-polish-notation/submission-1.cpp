int dpop(std::stack<int> &st)
{
    int n = st.top();
    st.pop();
    return (n);
}

int add_opp(int b, int a) {
    return (a + b);
}

int sub_opp(int b, int a) {
    return (a - b);
}

int mul_opp(int b, int a) {
    return (a * b);
}

int div_opp(int b, int a) {
    return (a / b);
}

class Solution {
    std::stack<int> st;
public:
    int evalRPN(vector<string>& tokens) {
        for (string &s: tokens) {
            if (s == "+") st.push(add_opp(dpop(st), dpop(st)));
            else if (s == "-") st.push(sub_opp(dpop(st), dpop(st)));
            else if (s == "*") st.push(mul_opp(dpop(st), dpop(st)));
            else if (s == "/") st.push(div_opp(dpop(st), dpop(st)));
            else st.push(atoi(s.c_str()));
        }

        return (st.top());
    }
};
