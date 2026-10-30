class MinStack {
    int min;
    std::vector<int> v;
    std::vector<int> ms;
public:
    MinStack() {
    }
    
    void push(int val) {
        if (v.size() == 0)
            ms.push_back(val);
        else if (val <= ms.back()) ms.push_back(val);
        v.push_back(val);
    }
    
    void pop() {
        if (v.size() == 0) return ;
        if (v.back() == ms.back()) ms.pop_back();
        v.pop_back();
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
        return ms.back();
    }
};
