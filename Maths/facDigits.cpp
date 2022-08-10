 int facDigits(int N){
        //code here
       double val=0;
        for(int i=1;i<=N;i++)
        {
            val += log10(i);
        }
        return val+1;
    }
