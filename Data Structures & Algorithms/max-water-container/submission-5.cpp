class Solution {
public:
    int maxArea(vector<int>& heights)
    {
        int maxs=0;
        int n = heights.size();
        
        
        int l = 0, r = n- 1;

        while(l < r)
        {
        int con = (r-l)*min(heights[r],heights[l]);
        maxs= max(con,maxs);

        if (heights[l]<heights[r])
        l++;

        else
        
        r--;
        

        
        }
    
    return maxs;
    }
};
