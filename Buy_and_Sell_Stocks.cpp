class Solution {
public:

    int solve(vector<int>& prices, int index, int ans){
        if(index == prices.size()){
            return ans;
        }
        for(int i=index; i<prices.size(); i++){
            if(prices[i] > prices[index]){
                ans = max(ans, prices[i]-prices[index]);
            }
        }
        return solve(prices,index+1,ans);
    }

    int maxProfit(vector<int>& prices) {
        return solve(prices, 0,0);
    }
};