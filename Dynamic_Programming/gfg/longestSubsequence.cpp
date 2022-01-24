int longestSubsequence(int n, int a[])
    {
       // your code here
       int lis[n];
       lis[0]=1;
       for(int i=1;i<n;i++)
       {
           lis[i]=1;
           for(int j=0;j<i;j++)
           {
               if(a[j]<a[i])
               lis[i]=max(lis[i],lis[j]+1);
           }
       }
       auto res=max_element(lis,lis+n);
       return *res;
    }
