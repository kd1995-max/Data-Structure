    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long low=0;
    long long high=m-1;
    
    int ans=INT_MAX;
    
    while(high<n)
    {
        if(ans>(a[high]-a[low]))
        ans=(a[high]-a[low]);
        low++;
        high++;
    }
    return ans;
    }   
