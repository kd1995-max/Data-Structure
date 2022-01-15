    int longestCommonSubstr (string str1, string str2, int n, int m)
    {
        // your code here
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++)
        dp[i][0]=0;
        for(int i=0;i<=m;i++)
        dp[0][i]=0;
        
         for(int i=1;i<=n;i++)
         {
              for(int j=1;j<=m;j++)
              {
                  if(str1[i-1]==str2[j-1])
                     dp[i][j]=1+dp[i-1][j-1];
                  else
                  {
                    dp[i][j]=0;
                  }
              }
         }
         
        //  4 6
        //  adac
        //  adadac  o/p= 4
         int max_=INT_MIN;
          for(int i=0;i<=n;i++)
          {
               for(int j=0;j<=m;j++)
               {
                   if(dp[i][j]>max_)
                    max_=dp[i][j];
               }
          }
          return max_;
    }
