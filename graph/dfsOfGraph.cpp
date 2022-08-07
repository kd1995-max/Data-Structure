 void dfs(int node,vector<int>& vec,vector<bool>&visited,vector<int>adj[])
    {
        vec.push_back(node);
        visited[node]=true;
        for(auto it: adj[node])
        {
            if(!visited[it])
            dfs(it,vec,visited,adj);
        }
    }
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        vector<int> vec;
        vector<bool> visited(v,false);
        
        for(int i=0;i<v;i++)
        {
            if(!visited[i])
            {
                dfs(i,vec,visited,adj);
            }
        }
        return vec;
        
    }
