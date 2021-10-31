int longestSubstrDistinctChars (string S)
{
    // your code here
    int n=S.length();
    int res=0;
    vector<int> prev(256,-1);
    int i=0;
    for(int j=0;j<n;j++)
    {
        i=max(i,prev[S[j]]+1);
        int max_end=j-i+1;
        res=max(res,max_end);
        prev[S[j]]=j;
        
    }
    return res;
}
