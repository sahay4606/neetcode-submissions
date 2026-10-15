class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int k = 0;
        for(int a : nums)
        {
            if(a != val)
            {
                nums[k++]= a;
            }
        }
        return k;
        
    }
};