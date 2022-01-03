#define ll long long int
  #define max 1000000007
  ll fib(ll n,vector<ll> &vec)
  {
      if(n<=1)
      return n;
      ll first, second;
      if(vec[n-1]!=-1)
             first=vec[n-1];
      else
            first=fib(n-1,vec);
            
      if(vec[n-2]!=-1)
             second=vec[n-2];
      else
             second=fib(n-2,vec);
        
       return vec[n]=(first%max + second%max)%max;
      
  }
    long long int nthFibonacci(long long int n){
        // code here
        
        vector<ll> vec(n+1,-1);
        return fib(n,vec);
    }
