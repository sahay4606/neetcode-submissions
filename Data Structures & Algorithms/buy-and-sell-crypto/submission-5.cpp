class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int minp=INT_MAX;
        int profit =0;
    
        for (int i =0; i< prices.size(); i ++)
        {
              profit =max(profit,(prices[i]-minp));
            minp = min(prices[i], minp);

           
        }

        return profit;
        
    }
};

/*
like we can do thing like 

*/