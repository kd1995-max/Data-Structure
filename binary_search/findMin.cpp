 int findMin(int arr[], int n){
        //complete the function here
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(mid>0 &&arr[mid]<arr[mid-1])
            return arr[mid];
            else if(arr[low]<=arr[mid] && arr[mid]>arr[high])
            low=mid+1;
            else
            high=mid-1;
        }
       return arr[low];
    }
