class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        vector<int> v;
        int k = 1;

        for(int i = 0; i < nums.size() ; i++)
        {

            if(nums[i] == val)
            {
                continue;
            }

            else
            {v.push_back(nums[i]);
            k++;}

            

        }

        nums = v;
        return k-1;
        
    }
};