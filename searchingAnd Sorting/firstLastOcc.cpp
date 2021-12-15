vector<int> find(int arr[], int n , int x )
{
    // code here
    
    int first=-1,last=-1;
    int l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]<x)
            l=mid+1;
        else if(arr[mid]>x)
            h=mid-1;
         else
         {
             if(mid==0 || arr[mid]!=arr[mid-1]){
                 first=mid;
                 break;
             }
             else
             h=mid-1;
         }
    }
    
    l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]<x)
            l=mid+1;
        else if(arr[mid]>x)
            h=mid-1;
        else{
            if(mid==n-1 ||arr[mid]!=arr[mid+1]) {
                last=mid;
                break;
            }
            else
            l=mid+1;
        }
    }
    return {first,last};
}
