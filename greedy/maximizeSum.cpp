 long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        sort(a,a+n);
        long long i=0;
        
        while(a[i]<0 && k-- && i<n)
        {
            a[i]=-a[i++];
        }
        
        if(k>0)
        {
            sort(a,a+n);
            while(k--)
            {
               a[0]=-a[0]; 
            }
        }
        
        long long sum=accumulate(a,a+n,0);
        
        return sum;
    }
