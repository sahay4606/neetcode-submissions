class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int n = strs.size();

        if ( n== 1)
        {
            return strs[0];
        }
    
        int k = 0;

        for (int i = 0 ; i < strs[0].size() ; i++)
        {
        for (int j = 1 ; j < n ; j++)
        {   
            if(i == strs[j].length() || strs[0][i] != strs[j][i])
            return strs[0].substr(0, i);
        }
        }

        return strs[0];

        


        
    }
};