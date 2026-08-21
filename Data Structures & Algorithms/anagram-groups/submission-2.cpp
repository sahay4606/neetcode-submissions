class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> v;
        unordered_map <string , vector<string>> m;

        for(string a:strs)
        {
            string key = a;

            sort(key.begin(),key.end());
            m[key].push_back(a);

        }

        for(auto& p : m)
        {
            v.push_back(p.second);

        }

        return v;
        
    }
};
