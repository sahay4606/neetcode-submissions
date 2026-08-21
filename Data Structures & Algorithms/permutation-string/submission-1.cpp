class Solution {
public:
    bool checkInclusion(string s1, string s2)
     {
        vector <int> a(26,0);
        vector <int> b(26,0);
        int l =0;


        for (int r = 0; r < s1.size() ; r++)
        a[s1[r]-'a']++;

        for (int r = 0; r < s2.size(); r ++)
        {
            b[s2[r]-'a']++;

            while( r+1-l == s1.size())
            {
                if (a == b)
                {return true;
                break;}

                b[s2[l]-'a']--;
                l++;


            }
        }
        return false;
        
    }
};
