class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> m;  // remember this definement too

        for(auto a : strs)
        {
            string key = a; // careful with the data type 
            sort(key.begin() , key.end());
            m[key].push_back(a);

        }

        vector<vector<string>> v;

        for(auto& [k , r] : m)  // rememeber the format map-> vector
        {
            v.push_back(r);
        }
        
        return v;
    }
};
