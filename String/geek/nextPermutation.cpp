void solve(vector<int> &vec)
{
    int n=vec.size();
    int idx=-1;
    for(int i=n-1;i>0;i--)
    {
        if(vec[i]> vec[i-1])
        {
            idx=i;
            break;
        }
    }
    if(idx==-1)
    reverse(vec.begin(),vec.end());
    else
    {
        int prev=idx;
        for(int i=idx+1;i<n;i++)
        {
            if(vec[i]>vec[idx-1] and vec[i]<=vec[prev])
            prev=i;
        }
    swap(vec[idx-1],vec[prev]);
    reverse(vec.begin()+idx,vec.end());
    }
   
}
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        solve(arr);
        return arr;
    }
