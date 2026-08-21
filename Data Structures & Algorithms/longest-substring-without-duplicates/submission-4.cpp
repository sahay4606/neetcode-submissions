class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int count=0;
        unordered_set<char> st;
        int len;
        int l =0;
        int mlen=1;

        for(int r =0; r<s.size(); r++)
        {
            
            while(st.count(s[r]))
            {
                mlen=max(mlen, r-l);
                st.erase(s[l]);
                l++;
            }

            st.insert(s[r]);
            mlen=max(mlen, r+1-l);
            



        }
        if (s.size()==0)
        return 0;
        else
        return mlen;
    }
};
//we have to find the longest sum alue 