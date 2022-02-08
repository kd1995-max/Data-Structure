class Solution
{
    public:
    //Function to merge k sorted arrays.
    struct Triplet{
        int val,apos,vpos;
        Triplet(int v,int ap,int vp)
        {
            val=v;apos=ap;vpos=vp;
        }
    };
    struct Mycomp
    {
        bool operator()(Triplet &t1,Triplet &t2)
        {
            return t1.val>t2.val;
        }
    };
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        //code here
        vector<int>res;
        priority_queue<Triplet , vector<Triplet>,Mycomp> pq;
        
        for(int i=0;i<k;i++)
        {
            Triplet t(arr[i][0],i,0);
            pq.push(t);
        }
        while(pq.empty()==false)
        {
            Triplet curr=pq.top();
            pq.pop();
            res.push_back(curr.val);
            int ap=curr.apos;
            int vp=curr.vpos;
            
            if(vp+1<k)
            {
                Triplet t(arr[ap][vp+1],ap,vp+1);
                pq.push(t);
            }
        }
        return res;
        
    }
