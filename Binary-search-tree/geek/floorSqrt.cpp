 long long int floorSqrt(long long int x) 
    {
        // Your code goes here  
         long long low=0, high=x,mid,ans;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(mid*mid>x)
        {
            high=mid-1;
        }
        else if(mid*mid<x)
        {
           low=mid+1;
           ans=mid;
        }
        else
            return mid; //perfect square
    }
    return ans;
    }
