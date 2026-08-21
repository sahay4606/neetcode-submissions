class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector <pair<int, int>> v;
          unordered_map<int,int> frq;
          vector <int> ans;


        for(int i : nums)
        frq[i]++;

        for (auto &i : frq) // map pe range bases loop use  AUTO
        {
            v.push_back({i.first, i.second});
        }
        sort (v.begin(), v.end(), [](auto &a, auto&b)// here 
        {
            return a.second>b.second ;
        });

        for (auto i : v )
        {
            ans.push_back(i.first);
        }

        ans.erase(ans.begin() + k , ans.end());









   

        return ans;

        
    }
};
