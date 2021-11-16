int majorityWins(int arr[], int n, int x, int y) {
 
    // code here

   int count_x = 0 , count_y = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        count_x++;
        else if(arr[i] == y)
        count_y++;
    }
    int res;
    if(count_x != count_y)
    res = (count_x > count_y)? x : y;
    else
    res = (x < y)? x : y;
    return res;
    
}
