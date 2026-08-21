class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set <int> s(nums.begin(), nums.end());
        int maxlen=0;
        int len=0;
        int cur =0;
       
      /* for (int i = 0; i < nums.size(); i++)
       {
        if( !s.count(nums[i]-1) )
        {
            cur = x ;

        }
       }*/

       for(int x : s)
       {

        if(!s.count(x-1))
        {
            cur =x;
            len=1;// as pehla word
        

        while(s.count(cur+1))// like use here cur -- lengrh would have been capped at 2 due to if
        // use here while loop and not a simple if else statement
            //x is an anchor not to be distureved cur moving things hwlp to remove infinite run 
        {
            cur++;
            len++;
        }
        
        maxlen=max(maxlen, len);
        }

       }
       return maxlen;
        
    }
};
