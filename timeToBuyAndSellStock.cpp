 
 int maxProfit(vector<int>& prices) { 
 // forward implimentation
 int buy = 0;
        int sell = 0;
        int possiblebuy = 0;
        for(int i = 1; i < prices.size(); ++i){
            if(prices[i] - prices[possiblebuy] >= prices[sell] - prices[buy]){
                buy = possiblebuy;
                sell = i;

            }else if(prices[i] < prices[possiblebuy]){
                possiblebuy = i;
            }
        }
        
        return prices[sell] - prices[buy]; 
}
