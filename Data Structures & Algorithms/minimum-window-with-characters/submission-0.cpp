class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size()) return "";

        vector<int> need(128, 0);
        for (char c : t) need[c]++;

        int required = 0;
        for (int x : need) if (x > 0) required++;// the character 

        vector<int> window(128, 0);
        int formed = 0;

        int l = 0;
        int minLen = INT_MAX;
        int start = 0;

        for (int r = 0; r < s.size(); r++) {
            char c = s[r];
            window[c]++;

            if (need[c] > 0 && window[c] == need[c])
                formed++;// uss character ke condition satisfied 

            // Try to shrink
            while (formed == required) {
                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    start = l;
                }

                char leftChar = s[l];
                window[leftChar]--;

                if ( window[leftChar] < need[leftChar])
                    formed--;

                l++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};



// this is the first time with this approach of question
/* here no fixed size and we not just want permutation of t string to be preset 
we want is optimized as well and we want to return the string as the answer also
we first find the unique letter and the condition linked to them */