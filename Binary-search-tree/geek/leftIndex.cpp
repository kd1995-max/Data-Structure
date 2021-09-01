int leftIndex(int N, int arr[], int X)
{
    
    int low=0,high=N;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>X)
            high=mid-1;
        else if(arr[mid]<X)
            low=mid+1;
        else
        {
            if(mid==0||arr[mid]!=arr[mid-1])
            return mid;
            else
            high=mid-1;
        }
    }
    return -1;
}

