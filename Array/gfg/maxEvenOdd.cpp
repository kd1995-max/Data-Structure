 int maxEvenOdd(int arr[], int n) 
    { 
       //Your code here
       int max_=1,count=1;
       for(int i=1;i<n;i++)
       {
           if((arr[i]%2 ==0 and arr[i-1]%2!=0)||(arr[i]%2!=0 and arr[i-1]%2==0))
            {
                count++;
                max_=max(max_,count);
            }
            else
            count=1;
       }
       return max_;
    } 
