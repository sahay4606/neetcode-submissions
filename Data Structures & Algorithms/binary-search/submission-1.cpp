class Solution {
private:
    int Bs(int l , int r , int t , vector<int>& arr)
    {
        if(l > r)
        return -1;

        int m = l + (r-l)/2;
        
        if(arr[m] == t)
        return m;

        return (arr[m] < t) ? Bs(m+1 , r , t , arr) : Bs(l , m-1 , t , arr);
          
        
            
    
    }



public:
    int search(vector<int>& nums, int target) {
        
        return Bs(0, nums.size()-1 , target , nums);
        
    }
};
