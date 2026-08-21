#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size();i++){
        if(nums[i]==nums[i+1])
        count++;
        }

        return (count !=0);
    }
};