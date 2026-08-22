class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();

        vector<vector<double>> p(n);

        for (int i = 0; i < n; i++) {
            double time = (double)(target - position[i]) / speed[i];

            p[i] = {(double)position[i], time};
        }

        // Sort by position: closest to target first
        sort(p.begin(), p.end(), [](auto &a, auto &b) {
            return a[0] > b[0];
        });

        stack<double> st;

        for (auto it : p) {

            // Current car catches the fleet ahead
            if (!st.empty() && st.top() >= it[1]) {
                continue;
            }

            // Current car forms a new fleet
            st.push(it[1]);
        }

        return st.size();
    }
};