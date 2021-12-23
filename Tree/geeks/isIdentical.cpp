 void function(Node *r1,Node *r2,bool &ans)
    {
        if(!r1 || !r2)
        {
            if((r1==NULL and r2!=NULL)||(r1!=NULL and r2==NULL))
            {
                ans=false;
                return;
            }
            return;
        }
        function(r1->left,r2->left,ans);
        if(r1->data !=r2->data)
        ans=false;
        function(r1->right,r2->right,ans);
    }
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        bool ans=true;
        function(r1,r2,ans);
        return ans;
    }
