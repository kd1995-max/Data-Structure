 bool checkRotatedAndSorted(int arr[], int num){
        
        // Your code here
       int count=0;
       
       if(arr[0] > arr[num-1])
       {
           for(int i=0;i<num;i++)
           {
               if(arr[i]>=arr[(i+1)%num])
               count++;
           }
           
       }
       else// if(arr[0]<arr[num-1])
       {
           for(int i=0;i<num;i++)
           {
               if(arr[i]<=arr[(i+1)%num])
               count++;
           }
       }
       if(count!=1)
       return false;
       
       return true;
    }
