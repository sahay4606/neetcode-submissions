class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        unordered_set<char> st;
        int count = 0;
        int maxCount=INT_MIN;
        int wordl=0;
        
        int replacement =0;
        
        for(int i = 0; i < s.size(); i++)
    {
        int maxf=0;
        vector <int> freq(26,0);
        for (int j = i ; j <s.size(); j++)
        {
            freq[s[j]-'A']++;
            maxf=max(maxf, freq[s[j]-'A']);

            // pehele instance mei aaab eg jab b hit hua  
            /*
            ye b hata kar hum a se replace kar sakte hai hi nahi...and also like if 
            humne pehle hi replace toh kar nahi diya already  */
            replacement = j+1-i -maxf;

            if(replacement<=k)
            wordl=max(wordl,(j+1-i));

        }
        /*
        xyyx.    x freq  badha */

    }
    return wordl;

        
    }
};



// the logic i can think of is that replace the max leter with the least charatcer...
// total length - max frequency <= number of replacement  ;
//total length = numofreplace(k) + max frequency;



/*
brute force... pehle se start karo...ak 26 size ka array bano.... and frequency note karo form start 
AAABABB
AABABB
ABABB

like this is how we seeing the max word out there

*/