   int solve (int n1,int n2,string s1,string s2,vector<vector<int>>&vec)
    {
        if(vec[n1][n2]!=-1)
         return vec[n1][n2];
        if(n1==0 ||n2==0)
         vec[n1][n2]=0;
        else
        {
            if(s1[n1-1]==s2[n2-1])
                return 1+solve(n1-1,n2-1,s1,s2,vec);
            else
            {
                int left,right;
                left=solve(n1,n2-1,s1,s2,vec);
                right=solve(n1-1,n2,s1,s2,vec);
                int res=max(left,right);
                vec[n1][n2]=res;
            }
        }
        return vec[n1][n2];
    }
    int lcs(int n1, int n2, string s1, string s2)
    {
        // your code here
        vector<int>v(n2+1,-1);
        vector<vector<int>>vec(n1+1,v);
        return solve(n1,n2,s1,s2,vec);
    }
