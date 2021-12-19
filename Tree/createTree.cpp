 Node *createTree(int arr[], int N)
    {
        // Your code here
        unordered_map<int , Node*> um;
        
        for(int i=0;i<N;i++)
        {
            Node *curr=new Node(i);
            um[i]=curr;
        }
        Node *root=NULL;
        for(int i=0;i<N;i++)
        {
            if(arr[i]<0)
            root=um[i];
            else
            {
                if(um[arr[i]]->left==NULL)
                um[arr[i]]->left=um[i];
                else
                um[arr[i]]->right=um[i];
            }
        }
        return root;
    }
