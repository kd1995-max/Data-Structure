	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here b266
	    
	    vector<int>vec;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==i+1)
	            
	            vec.push_back(arr[i]);
	    }
	    return vec;
	   
	}
