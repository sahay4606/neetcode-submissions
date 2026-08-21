class Solution {
public:
    int maxArea(vector<int>& heights)
    {
        int maxs=0;
        int n = heights.size();
        
        for (int i =0; i <n-1; i++)
        {
        int l = i, r = n- 1;

        while(l < r)
        {
        int con = (r-l)*min(heights[r],heights[l]);
        if (con > maxs)
        maxs=con;

        
        
        r--;
        

        
        }
    }
    return maxs;
    }
};
