 int findzero(int count)
        {
            int zero=0; 
            int p=5;
            while(count/p>0)
            {
                zero +=count/p;
                p *=5;
            }
            return zero;
        }
        int findNum(int n)
        {
        //complete the function here
        if(n==1)
            return 5;
        int low=0, high=5*n;
        while(low<high)
        {
            int mid=(low+high)/2;
            
            if(findzero(mid)<n)
                low=mid+1;
            else if(findzero(mid)>=n)
                high=mid;
        }
            return low;
       }
