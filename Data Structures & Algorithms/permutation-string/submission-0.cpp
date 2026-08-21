class Solution {
public:
    bool checkInclusion(string s1, string s2)
    {
        
        bool ans = false;
        int l =0, r =0; 
       
        vector <int> count1(26,0);

        for (int r =0; r < s1.size();r++)
        count1[s1[r]-'a']++;

        vector <int> count2(26,0);


        for (int r = 0; r< s2.size(); r++ )
        {
            count2[s2[r]-'a']++;
            
            if(r+1-l==s1.size())
            {
                

                if(count1 == count2)
                {ans = true;

                break;}

                count2[s2[l]-'a']--;

                l++;
                
            }



           

        }
        return ans;
    }
};
