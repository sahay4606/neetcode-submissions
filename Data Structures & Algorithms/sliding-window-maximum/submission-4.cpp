class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
        deque <int> dq; 
        vector <int> ans;
        for(int i = 0 ;  i< nums.size(); i++)
        {
            while(!dq.empty() && nums[i]>nums[dq.back()])// like the conditon for to ignore if empty, why if wont work 
            // sab sath mei dharrale se isse hi nikal te 
            dq.pop_back(); 

            dq.push_back(i);// eg 1 3 -1 -3 -4  3 6 7 like in this we will have to take care hi over exceed na hojaye

            if (i-k == dq.front())
           dq.pop_front();

            if( k <= i +1)// condition to push back answer if things window fixed 
            // uss instance ke baad se har baar record karna 
            ans.push_back(nums[dq.front()]);




        }
        return ans;
        
    }
};
