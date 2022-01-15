   int shortestCommonSupersequence(string str1, string str2, int m, int n)
    {
        //code here
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 || j==0)
                dp[i][j]=0;
            }
        }
         for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(str1[i-1]==str2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
                else
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return m+n-dp[m][n];
    }
