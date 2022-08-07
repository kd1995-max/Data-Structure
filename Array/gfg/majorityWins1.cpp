 int majorityWins(int arr[], int n, int x, int y) {
        // code here
        int c1 = 0 , c2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        c1++;
        else if(arr[i] == y)
        c2++;
    }
    int res;
    if(c1 != c2)
    return (c1 > c2)? x : y;
    else
    return (x < y)? x : y;     
    }
