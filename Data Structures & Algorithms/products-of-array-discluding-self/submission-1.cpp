class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();
        vector <int> ans(n);
        int rightproduct = 1;
        ans[0] = 1;
        // for the most optimal soln we have to make 
        // ans variable as product of the lhs and use
        // right product to multipy the ans( left product) with it 
        // just visualise that total element in v will be as many as the number of element]

        for(int i = 1 ; i< nums.size(); i++)
        {
            ans[i] = nums[i-1] * ans[i-1];
        }

        for(int i = n- 1; i >= 0; i--)
        {
            ans[i]*= rightproduct; // ans here has the left product of the number product 

            rightproduct= nums[i] *rightproduct;
        }
        return ans;

    }
};
