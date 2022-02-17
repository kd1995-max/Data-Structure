 vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool arr[V+1];
        memset(arr,false,sizeof(arr));
        queue<int>q;
        arr[0]=true;
        q.push(0);
        vector<int>vec;
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            
            vec.push_back(u);
            for(auto e : adj[u])
            {
                if(arr[e]==false)
                {
                    arr[e]=true;
                    q.push(e);
                }
            }
        }
        return vec;
    }
