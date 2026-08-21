class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();
        vector <int> pleft(n);
        vector <int> pright(n);
        vector <int > ans(n);
        pleft[0]= 1, pright[nums.size()- 1]= 1; 
        for (int i = 1 ; i < nums.size() ; i++)// like start the loop from 1 
        {
            pleft[i] = nums[i-1]* pleft[i-1];
        }

        for (int i = nums.size()- 2; i>= 0 ; i --  )
        {
            pright[i] = nums[i+ 1] * pright[i + 1];

        }

        for (int i = 0 ; i < nums.size() ; i++)
        {
            ans[i]= pleft[i] * pright[i] ;

        }

        return ans;

    }
};
