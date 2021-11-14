   
  int normalMaxSum(int arr[] , int n)
   {
       int res = arr[0] , MaxEnding = arr[0];
       for(int i = 1; i <n; i++)
       {
           MaxEnding = max(arr[i] + MaxEnding , arr[i]);
           res = max(res , MaxEnding);
       }
       return res;
   }
   int circularSubarraySum(int arr[], int num){
 
       // your code here
       int max_normal = normalMaxSum(arr, num);
 
       if(max_normal<0)
       return max_normal;
 
       int arr_sum = 0;
 
       for(int i = 0; i<num; i++)
       {
           arr_sum += arr[i];
           arr[i] = -arr[i];
       }
 
       int circular_sum = arr_sum + normalMaxSum(arr, num);
       return max(max_normal , circular_sum);
   }

