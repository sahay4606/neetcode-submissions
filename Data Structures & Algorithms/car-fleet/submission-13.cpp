class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector <vector<double>> p(n);
        for(int i = 0 ; i < n; i++)
        {
            double time = (double)(target - position[i]) / speed[i];
            p[i] = {(double)position[i], time};
        }

        sort(p.begin(), p.end(), [](auto &a, auto &b) {
            return a[0] > b[0];
        });
        //auto & [] sort on second para

        stack <double> st;
        for(auto it : p)
        {   

            if(!st.empty() && st.top() >= it[1])
            {
                continue;
            }
            st.push(it[1]);
        }
        return st.size();         
    }
};
