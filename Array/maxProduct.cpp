Brute Force :-
int maxSubArrayProduct(int[] arr, int size) {
    int maxProduct = INT_MIN
    for(int i=0 to i < size){
        localProduct = 1
        for(int j=i to j < size){
            localProduct = localProduct * arr[j]
        }
        maxProduct = max(maxProduct, localProduct)
    }
    return maxProduct
}
Time Complexity: O(n²)

Space Complexity: O(1)

optimize:=

long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long ans = arr[0];
	    long long ma = arr[0];
	    long long mi = arr[0];
	    
	    for(int i = 1; i < n; i++)
	    {
	        if(arr[i] < 0)
	        swap(ma , mi);
	        
	        ma = max(ma*arr[i],(long long)arr[i]);
	        mi = min(mi*arr[i],(long long)arr[i]);
	        
	        ans = max(ma,ans);
	    }
	    
	    return ans;
	}
Time Complexity: O(n)

Space Complexity: O(1)
