  int findPosition(int N) {
        // code here
        if(N==0 || (N&(N-1))!=0)
        return -1;
        
        int count=0;
        while(N)
        {
            count++;
            if(N==1)
            break;
            
            N>>=1;
        }
        return count;
    }
