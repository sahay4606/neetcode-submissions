class Solution {
    private:
    int helper(vector <int> &arr , int l ,int  r)
    {
        if(arr[l] <= arr[r])
        return arr[l];

        int mid = l + (r-l)/2;

       return (arr[l] <= arr[mid] ) ? (helper(arr , mid+1 , r)) : (helper(arr, l , mid));




    }
public:
    int findMin(vector<int> &nums) 
    {

        return helper(nums , 0 , nums.size()-1);


        
        
        
    }
};
