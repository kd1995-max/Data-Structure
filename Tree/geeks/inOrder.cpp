 void in(Node* root,vector<int> &vec)
    {
        if(root!=NULL)
        {
            in(root->left,vec);
            vec.push_back(root->data);
            in(root->right,vec);
        }
    }
    
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>vec;
        in(root,vec);
        return vec;
    }
