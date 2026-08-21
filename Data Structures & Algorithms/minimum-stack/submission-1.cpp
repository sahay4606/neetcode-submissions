class MinStack {
    private:
        long min;
        stack <long> st;



public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty())
        {st.push(0);
        min= val;}

        else
        st.push(val-min);

        if(val-min < 0)
        min = val;
        
    }
    
    void pop() {
        if(st.top() < 0 )
        min = min - st.top();

        st.pop();
        
    }
    
    int top() {
        if(st.top() > 0)
        return min+st.top() ;

        else return min;
    }
    
    int getMin() {
        return min;
        
    }
};
