//Best time to buy and sell stocks
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        if(prices.empty()) return 0;
        
        int profit, buyValue, evaluate;
        buyValue = prices[0];
        profit = 0;
        
        for(int j=1; j < prices.size(); j++) 
        {
            if(prices[j] - buyValue > profit) 
               profit = prices[j] - buyValue; 
            
            if(prices[j] < buyValue) 
               buyValue = prices[j];
        }
        return profit;
    }
};