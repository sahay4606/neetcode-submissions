class Solution {
private:
int Bs(vector <int> &arr , int l , int r , int t  )
{
    int mid = l + (r-l)/2;

    if(l==r) // this case is imp of l >= r
    return l;

    return (isvalid(arr , t , mid))? Bs(arr , l , mid  , t) : Bs(arr , mid + 1 , r , t);
  // upar wale sab sahi hai Bs(arr , l , mid  , t) , but what if the mid is the last one to satisfy , so for here not mid - 1 ..



   
}



bool isvalid(vector<int> & arr , int h , int ref )
{
    int c = 0;
    for(int a : arr)
    {
        c+=  a / ref + (a % ref != 0) ; // simple mistake of += thing 

    }
    return c <= h ;
}
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        // find from 1 to 4  or piles min to max 
        int max = *max_element(piles.begin(), piles.end() );

        

        return Bs(piles , 1 , max , h );



    }
};
