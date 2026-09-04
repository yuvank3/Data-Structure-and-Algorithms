class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestb=prices[0];
        int mp = 0;
        for(int i=0;i<prices.size();i++){
           if(prices[i] > bestb){
                mp = max(mp,prices[i] - bestb);
            }
            bestb = min(bestb,prices[i]);
        }
        return mp;
    }
};
