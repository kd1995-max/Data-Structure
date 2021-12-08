	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x)
	{
	    // code here
	   unordered_set<int> us;
	   
	   for(int i=0;i<n;i++)
	   {
	       int sum=x-arr[i];
	       
	       if(us.find(sum)!=us.end())
	       return true;
	       
	       us.insert(arr[i]);
	   }
	   return false;
	}
