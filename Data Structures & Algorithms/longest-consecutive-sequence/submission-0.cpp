class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for (int x : st) {
            if (!st.count(x - 1)) {   // start of sequence
                int cur = x;
                int len = 1;

                while (st.count(cur + 1)) {
                    cur++;
                    len++;
                }

                longest = max(longest, len);
            }
        }
        return longest;
    }
};