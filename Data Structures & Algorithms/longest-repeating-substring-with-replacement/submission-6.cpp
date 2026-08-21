class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int r , l =0;
        int maxfreq=0,maxlen=0;
        


        vector <int> freq(26,0);
        for (int r = 0; r < s.size() ; r++)
        {
            freq[s[r]-'A']++;
            maxfreq=max(maxfreq, freq[s[r]-'A']);
            
            while ( (r+1-l)-maxfreq > k )
            {
                freq[s[l]-'A']--;
                l++;

            
            }

            maxlen=max(maxlen, r+1-l);
        }
       return maxlen; 
    }
};
