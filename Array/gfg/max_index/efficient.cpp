 int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        int l=0, h=N-1,res=INT_MIN;
        while(l<=h)
        {
            if(A[l]<=A[h])
            {
                int diff=h-l;
                res=max(res,diff);
                l++;
                h=N-1;
            }
            else
            h--;
        }
        return res;
    }
