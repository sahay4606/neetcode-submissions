class Solution {
public:
    int maxProfit(vector<int>& prices) 
    
    {
        int r =prices.size();
        int l = 0;
        int minprice=INT_MAX;
        int profitmax = 0;

        while ( l<r)
        {
        if (prices[l]<minprice)
        minprice = prices[l];

        else
        {
            if((prices[l]-minprice)>profitmax)
            profitmax=prices[l] - minprice;
        }
        

        l++;


        }
        return profitmax;
        
    }
};

/*
overall all constrains-

buy before sell
return 0 if not profit
1 single day

we can like compute the maximum profit at index i by prices[i] - minpfromleft;
while ( l<r)
{
    if (price[l]<minprice)
    minprice = price[i];

    else
    profitmax=price[l] - minprice;

    l++


}


*/