class Solution {
public:
    bool isAnagram(string s, string t) 
    {

        vector <int> v(26,0);
        vector <int> a(26,0);

        
        if(s.length() == t.length())
        {
            for(int i = 0 ; i < s.length() ; i++)
            {
                v[s[i] - 'a']++;
                a[t[i]- 'a']++;

            }

            return (v == a);

        }
        return false;
        
    }
};
