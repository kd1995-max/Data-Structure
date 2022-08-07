int majorityElement(int a[], int n)
{
      int res=0,c=1;  
    // your code here
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[res])
        c++;
        else
        c--;
        if(c==0)
        {
            res=i;
            c=1;
        }
    }
    c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[res])
        c++;
        
    }
        if(c<=n/2)
        return -1;
        return a[res];
        
}
