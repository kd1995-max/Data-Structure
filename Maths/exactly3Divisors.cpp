 bool isPrime(int N)
    {
        //Your code here
        if(N == 1)
        return false;
        
        if(N == 2 || N == 3)
        return true;
        
        if(N%2 == 0 || N%3 == 0)
        return false;
        
        for(int i = 5; i*i <= N; i+=6)
        {
            if(N%i == 0 || N%(i + 2) == 0)
            return false;
        }
        
        return true;
    }
    
    int exactly3Divisors(int N)
    {
        //Your code here
        int count =0;
        for(int i=1;i<=sqrt(N);i++)
        {
            if(isPrime(i)==true)
            count++;
        }
        return count;
    }
