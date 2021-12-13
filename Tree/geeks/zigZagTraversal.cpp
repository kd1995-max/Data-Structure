  vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int>vec;
    	queue<Node*> q;
    	if(!root)
    	    return vec;
    	 q.push(root);
    	 int count=1;
    	 while(!q.empty())
    	 {
    	     vector<int> v;
    	     int size=q.size();
    	     while(size--)
    	     {
    	         Node * curr=q.front();
    	         v.push_back(curr->data);
    	         q.pop();
    	         if(curr->left)
    	            q.push(curr->left);
    	         if(curr->right)
    	            q.push(curr->right);
    	     }
    	     if(count%2==0)
    	        reverse(v.begin(),v.end());
    	       for(int i=0;i<v.size();i++)
    	        vec.push_back(v[i]);
    	        count= !count;
    	 }
    	
    return vec;	
    	
    }
