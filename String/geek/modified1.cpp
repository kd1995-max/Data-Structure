 int modified (string a)
    {
        // Your code here
     
     int count =1;
     int ans=0;
     for(int i=1;i<a.length();i++)
     {
         if(a[i-1]==a[i])
         {
             count++;
         }
         else
         {
             count=1;
         }
         if(count==3)
         {
             ans++;
             count=1;
         }
     }
     return ans;
       
    }
