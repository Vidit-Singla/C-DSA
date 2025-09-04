class Solution {
public:
    int solve(vector<int>& coins, int amount){
        if (amount == 0) {
            return 0;
        }
        int minans = INT_MAX;
        for (int i=0; i<coins.size(); i++){
            int coin = coins[i];
            if (coin <= amount) {
                int recans = solve(coins,amount-coin);
                if(recans != INT_MAX) {
                int coinsused = 1 + recans;
                minans = min(coinsused,minans);
            }
            else {
                return -1;
            }
            }
            
        }
    return minans;
    }
    int coinChange(vector<int>& coins, int amount) {
        int ans = solve(coins, amount);
        return ans;
    }
};