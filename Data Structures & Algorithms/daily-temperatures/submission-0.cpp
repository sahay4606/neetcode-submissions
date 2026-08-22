class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    // we not filling in order linearly , we fill the index in stack , use for and while inside , (compare the current one to all indexes left in stack , one we found for that we pop that element from stack , so we dont have do for it again , each new element is then pushed into the stack .. after the while loop , )
    {
        
        stack <int> st ;
        int n = temperatures.size();
        vector <int> result(n,0);

        for(int i = 0 ; i < n; i++ )
        {
            while(!st.empty() && temperatures[i] > temperatures[st.top()])
            {
                int prevd = st.top();
                st.pop();

                result[prevd]= i- prevd;
            }

            st.push(i);

        }
        return result;

        
    }
};
