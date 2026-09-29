class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Mp=0;
        int Bestbuy=prices[0];
         
         for(int i=1;i<prices.size();i++)
         {
            if(prices[i]>Bestbuy)
            {
              Mp=max(Mp,prices[i]-Bestbuy);
            }
            Bestbuy=min(Bestbuy,prices[i]);
         }
         if(Mp>0)
         {
            return Mp;
         }
         else{
            return 0;
         }
    }
};