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
