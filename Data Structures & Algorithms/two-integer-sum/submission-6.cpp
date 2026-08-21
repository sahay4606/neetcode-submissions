class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<pair<int,int>> v;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {

            v.push_back({nums[i],i});
            // v[i].second=i;
            // v[i].first=nums[i];
        }

        sort(v.begin(),v.end());
        // sort(nums.begin(),nums.end());
        int n = nums.size();

        int l = 0 , r = n-1;

        while(l < r)
        {
            int sum = v[l].first+v[r].first;
            if (sum== target)
            {
                ans={v[l].second,v[r].second};
                // while(l<r && nums[l]==nums[l+1])l++;
                // while(l<r && nums[r]==nums[r-1])r--;
                // l++;
                // r--;
                sort(ans.begin(),ans.end());

                break;

            }

            else if(sum <target)
           l++;

           else
           r--;



        }


        return ans;




        
    }
};
