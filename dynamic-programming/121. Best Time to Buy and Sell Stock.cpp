class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int maxDays = prices.size();
        int minimumPrice = 99999999;
        int *profits = new int[maxDays];
        memset(profits,0,sizeof(int)*maxDays);
        for(int i=0;i<maxDays;i++){
            if(prices[i] < minimumPrice) minimumPrice = prices[i];
            else{
                int profit = prices[i] - minimumPrice;
                if(profit > maxProfit) maxProfit = profit;
            }
        }
        return maxProfit;
    }
};
