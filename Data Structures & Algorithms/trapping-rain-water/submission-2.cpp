class Solution {
public:
    int trap(vector<int>& height) 
    
    {
        int n = height.size();
        int l = 0, r = n- 1;
        int maxl=height[0], maxr=height[r]; 
        int sum = 0;

        //min(maxl,maxr)- height[i];
        while (l < r)
        {
             if(height[l]< height[r])
             {
                l++;
                maxl= max( maxl,height[l]);
                sum += maxl-height[l];
             }

             else
             {
                r--;
                maxr = max(maxr, height[r]);
                sum += maxr-height[r];
             }

        }
        return sum;
    }
};
