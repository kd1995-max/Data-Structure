// 	int isPalindrome(string s)
// 	{
// 	    // Your code goes here
	   // int n=s.length();
	   // if(n==0)
	   // return 0;
	   // for(int i=0;i<n;i++)
	   // {
	   //     if(s[i]!=s[n-i-1])
	   //         return 0;
	   // }
	   // return 1;
	   
//	}

//recursion
// 	int helper(string s, int i,int j)
// 	{
// 	        if(i > j)
// 	        return 1;
	        
// 	        if(s[i] != s[j])
// 	        return 0;
	        
// 	        return helper(s,i+1,j-1);
// 	}
	
// 	int isPalindrome(string s)
// 	{
// 	    // Your code goes here
// 	    int idx = 0;
// 	    int n = s.length();
// 	    return helper(s,idx,n-1);
// 	}
