 void versum(Node * root,int hd, map<int,int> &mp)
  {
      if(root==NULL)
      return;
      
      versum(root->left,hd-1,mp);
      mp[hd] +=root->data;
      
      versum(root->right,hd+1,mp);
  }
    vector <int> verticalSum(Node *root) {
        // add code here.
        vector<int> vec;
        map<int,int> mp;
        versum(root,0,mp);
        for(auto e : mp)
        {
            vec.push_back(e.second);
        }
        return vec;
    }
