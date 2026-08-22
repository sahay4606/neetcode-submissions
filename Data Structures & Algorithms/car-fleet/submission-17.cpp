class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<vector<double>> p(n);
        for(int i = 0 ; i < n; i++)
        {
            double time = (double)(target - position[i]) / speed[i];
            cout << time << " ";
            p[i] = {(double)position[i], time};
        }

        int ans = 0;
        double maxTime = INT_MIN;
        sort(p.begin(),p.end());
        for(int i=n-1;i>=0;i--) {
            if(p[i][1]>maxTime) {
                maxTime = p[i][1];
                ans++;
            }
        } 
        return ans;
    }
};
