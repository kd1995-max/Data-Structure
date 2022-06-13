  vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int> vec;
        sort(arr,arr+n);
        
        for(int i=n-1; i>= 0;i--)
        {
            if(k-- ==0)
            break;
            
            vec.push_back(arr[i]);
          //  k--;
        }
        return vec;
    }
