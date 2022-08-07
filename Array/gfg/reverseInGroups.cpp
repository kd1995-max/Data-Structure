1 method;- 
void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int r=k;
        for(int i=0;i<n;i+=k)
        {
            r=(r>n)?n:r;
            reverse(arr.begin()+i,arr.begin()+r);
            r=r+k;
        }
    }
2 method:-
 for(long i=0;i<n;i+=k)
 {
           if(i+k<n)
           {
               reverse(arr.begin()+i,arr.begin()+(i+k));
           }
           else{
               reverse(arr.begin()+i,arr.end());
           }
  }
