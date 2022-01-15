class Solution {
	public :
	int longestCommonSubsequence(string str1,string str2)
	{
		int n=str1.size();
		int m=str2.size();
		string s;
		int dp[n+1][m+1];
		for(int i=0;i<=n;i++)
			dp[i][0]=0;
		for(int i=0;i<=m;i++)
			dp[0][i]=0;
			
		for(int i=1;i<=n;i++)
			{
				for(int j=1;i<=m;j++)
				{
					if(str[i-1]==str[j-1])
						dp[i][j]=1+dp[i-1][j-1];
					else
						dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
				}
			}
			int i=n,j=m;
			while(i>0 && j>0)  // i or j =0 , then string empty
			{
				if(str1[i-1]==str2[j-1])
				{
					s += str[i-1];    //matches then add result string and move digonally up
					i--;
					j--;
				}
				else                // else find the max of up and right position of dp table and move accordingly to up or left
				{
					if(dp[i][j-1]>dp[i-1][j])
					j--;
					else
					i--;
				}
			}
			reverse(s.begin(),s.end());
			cout<<s;
			return dp[n][m];
	}
};
