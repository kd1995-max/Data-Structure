 vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        // Code here
        vector<vector<int>> vec(V);
        for(int i=0;i<V;i++)
        {
            vec[i].push_back(i);
            for(int j=0;j<adj[i].size();j++)
            {
                vec[i].push_back(adj[i][j]);
            }
        }
        return vec;
    }
