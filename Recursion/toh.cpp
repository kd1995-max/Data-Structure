  void TOH(int n,int from,int to,int aux)
    {
        if(n==1)
        {   
            cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
            return;
        }
        TOH(n-1,from,aux,to);
            cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to <<endl;
            TOH(n-1,aux,to,from);
    }
    
    
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        
        long long ans=pow(2,N)-1;
        if(N==1)
            ans=1;
        TOH(N,from,to,aux);
        return ans;
        
    }
