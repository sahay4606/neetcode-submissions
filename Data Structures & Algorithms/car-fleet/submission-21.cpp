class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) 
    {
        int n = position.size();
        vector<vector<double>> v;// 2nd wala time no n 

        for(int i = 0 ; i < n ; i++)
        {
            //v[i][0]= position[i];
            double time = (double)(target - position[i])/speed[i]; // add for double
            //v[i][1] = time;

            v.push_back({(double)position[i], time}); // add for double, {} to push 
        }


        sort(v.begin(), v.end(), [](const auto& a, const auto& b){
            return a[0] > b[0];
    });
// very imp for descending


        stack <double> st;

        for(auto &a : v)
        {
            if(!st.empty() && st.top() >= a[1])
            continue;

            st.push(a[1]);

        }

        // only push the slowest in time 
        



        return st.size();





    }
};
