class Solution {
public:
    int knapsack(int V, int n, vector<vector<int> >& vw)
    {
        vector<vector<int>> dp(n+1,vector<int>(V+1,0));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=V;j++)
            {
             if(j-vw[i-1][0]<0)
             {
                dp[i][j]=dp[i-1][j];
             }
             else {
             dp[i][j]=max(dp[i-1][j],dp[i-1][j-vw[i-1][0]]+vw[i-1][1]);
             }
            }
        }
         return dp[n][V];
    }
};
