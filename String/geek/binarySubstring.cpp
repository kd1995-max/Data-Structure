  long binarySubstring(int n, string a){
        
        // Your code here
        
        int count=0;
        int total=0;
        for(int i=0;i<=n;i++)
        {
            if(a[i]=='1')
            count++;
        }
        total=(count-1)*(count)/2;
        return total;
        
    }
