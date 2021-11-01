  bool help(int n,int count)
    {

        if(n%count==0)
            return false;
        
        if(count>n)
            return true;
        

        n=n-n/count;
        
        count++;
        
        return help(n,count);
    }
    bool isLucky(int n)
    {
        // Your code here
        int count=2;   //instead make another function, and reset the value of count to 2
        return help(n,count);
    }
