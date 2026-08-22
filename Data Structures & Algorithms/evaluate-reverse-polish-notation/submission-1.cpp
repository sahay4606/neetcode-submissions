class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack <int> st;
        int n = tokens.size();
        // worst case mei 2 element in stack , as operation done , 1 remain , wait for new number , push that again it is 2 , then if sign come , put those 2 to variable and then perform operation,

        for(const string& token : tokens)
        {
            if(token == "+" || token == "-" || token == "*" || token == "/")
            {int a= st.top(); st.pop(); // later one 
            int b = st.top(); st.pop();

            if(token == "+" ) st.push(a+b);
            if(token == "-" ) st.push(b-a);
            if(token == "*" ) st.push(a*b);
            if(token == "/" ) st.push(b/a);
            




            }

            else 
            st.push(stoi(token));
        }
        return st.top();

    }
};
