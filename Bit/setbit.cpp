int setBits(int N) {
        // Write Your Code here
        int res=0;
        while(N>0)
        {
            N=(N &(N-1));
            res++;
        }
        return res;
    }
