   int dp[1001][1001];
   
   int solve(int wt[],int val[],int w,int n)
   {
       if(n==0 ||w==0)
       return 0;
      
       if(dp[n][w] !=-1)
       return dp[n][w];
       
       if(wt[n-1]<=w)
       return  dp[n][w]=max(val[n-1]+solve(wt,val,w-wt[n-1],n-1),solve(wt,val,w,n-1));
       else if(wt[n-1] >w)
       return dp[n][w]=solve(wt,val,w,n-1);
       
   }
   
   
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       
      memset(dp,-1,sizeof(dp));
      return solve(wt,val,W,n);
    }
