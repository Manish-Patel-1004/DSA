class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
        return f1(coins, n - 1, amount, dp);
    }

private:
    int f1(vector<int>& coins, int i, int amount, vector<vector<int>>& dp) {
        if (i == 0) {
            if (amount % coins[0] == 0)
                return 1;
            return 0;
        }
        if (dp[i][amount] != -1)
            return dp[i][amount];
        int n1 = f1(coins, i - 1, amount, dp);
        int t = 0;
        if (coins[i] <= amount)
            t = f1(coins, i, amount - coins[i], dp);
        return dp[i][amount] = t + n1;
    }
};