class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            minn = min(minn, prices[i]);          
            int profit = prices[i] - minn;       
            maxProfit = max(maxProfit, profit);  
        }

        return maxProfit;
    }
};