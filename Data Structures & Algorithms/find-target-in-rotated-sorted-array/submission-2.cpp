class Solution {
private:
int help(vector<int> &arr , int l , int r , int t)
{
    int mid = l + (r-l)/2;

     if (l>r) 
    return -1;

    if(arr[mid] ==t)
    return mid;

   

    if(arr[l] <= arr[mid])
    return (t >= arr[l] && t < arr[mid]) ? help (arr , l , mid-1 , t): help  (arr , mid+1 , r , t);

    else 
    return (t > arr[mid] && t <= arr [r]) ? help (arr , mid+1 , r , t ) : help(arr , l , mid -1 , t);


    

}
public:
    int search(vector<int>& nums, int target) 
    {

        return help(nums ,0 , nums.size() - 1  , target);
        
    }
};
