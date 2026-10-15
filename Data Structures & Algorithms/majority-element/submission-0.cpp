class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        int maxnum = 0;
        int mcount = 0;
       
       for(int a : nums) // this cancelling logic works as more than half are one number so will always tend to become positive

       {
        if(mcount == 0)
        maxnum = a;

        if (a == maxnum)
        mcount++;
        else
        mcount--;






       }

       return maxnum;

        

        
    }
};