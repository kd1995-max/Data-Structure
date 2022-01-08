    int cutRod(int price[], int n) {
        //code here
       int length[n];
       for(int i=1;i<=n;i++)
       {
           length[i-1]=i;
       }
       int dp[n+1][n+1];
       for(int i=0;i<=n;i++)
       {
           dp[0][i]=0;
       }
        for(int j=0;j<=n;j++)
        {
            dp[j][0]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(length[i-1]>j)
                dp[i][j]=dp[i-1][j];
                else
                dp[i][j]=max(price[i-1]+dp[i][j-length[i-1]],dp[i-1][j]);
            }
        }
        return dp[n][n];
    }
};
