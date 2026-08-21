class Solution {
public:
    int trap(vector<int>& height)
     {
        int sum  = 0;
        for ( int i = 0 ; i < height.size(); i ++ )
        {
            int maxl =0;
            int maxr =0;

            for (int j=0; j < i; j ++)
            {
                maxl = max(maxl ,height[j]);
            }

            for (int j=i+1; j < height.size(); j ++)
            {
                maxr = max(maxr ,height[j]);
            }

            sum+=max(0, (min(maxl,maxr))- height[i]);


        }
        return sum;


    }
};
