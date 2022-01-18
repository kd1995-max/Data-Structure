    int kMostFrequent(int arr[], int n, int k) 
    { 
    	// Your code here	
    	unordered_map<int,int>um;
    	
    	for(int i=0;i<n;i++)
    	um[arr[i]]++;
    	
    	priority_queue<int>pq;
    	
    	for(auto e: um)
    	{ 
    	    pq.push(e.second);
    	}
    	int sum=0;
    	while(k--)
    	{
    	    sum +=pq.top();
    	    pq.pop();
    	}
    	return sum;
    } 
