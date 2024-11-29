class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowBuy = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < lowBuy) {
                lowBuy = prices[i];
            }

            profit = max(profit, prices[i] - lowBuy);
        }

        return profit;
    }
};