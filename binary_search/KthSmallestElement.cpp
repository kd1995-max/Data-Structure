 void helper(Node *root,int k,int &i,int &ans)
   {
     
       if(!root)
       return ;
     
       helper(root->left,k,i,ans);
         i++;
         if(k==i)
            ans=root->data;
         helper(root->right,k,i,ans);
   }
    
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        int i=0;
        int ans=-1;
        helper(root,K,i,ans);
        return ans;
    }
