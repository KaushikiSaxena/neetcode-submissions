// Time Complexity: O(n) Space Complexity: O(1)//
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int days = prices.size();
       int buy = 100;
       int profit =0;

       for(int i=0;i<days;i++)
       {
        if(prices[i]<buy)
        buy = prices[i];//lowest buying price yet//

        else if(prices[i]-buy>profit)
        profit = prices[i]-buy;//current price - lowest buying price yet//
       }
return profit;
    }
};
