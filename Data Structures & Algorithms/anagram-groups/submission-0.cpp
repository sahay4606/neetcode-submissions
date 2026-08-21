class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>> mp;// for a given key a set of string can be strored
        vector <int> v (26,0);
        vector<vector<string>> ans;
      string key="";
     

        for(int i = 0; i < strs.size(); i++)
        {
            for(char j : strs[i] )
            v[j-'a']++; // task made so much easier due to this
        

        // highhly imp to remember
          
        for(int x : v)
         key +=to_string(x) + "#";

        mp[key].push_back(strs[i]);

        fill(v.begin(), v.end(), 0);
        key="";
        }

        for ( auto &j : mp ){
            ans.push_back(j.second);
        }
        return ans;
    }
};

/*for(int j : strs[i] )
v[strs[i][j]-'a']++;
*/ 
/*wrong 
in this loop since its going through all the character it 
values are char */

