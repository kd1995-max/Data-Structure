  Node* mergeSort(Node* head) {
        // your code here
        vector<int>vec;
        Node* curr = head;
        
        while(curr)
        {
            vec.push_back(curr->data);
            curr=curr->next;
        }
    
        sort(vec.begin(),vec.end());
    
        Node *newNode = NULL;  
        Node *temp = NULL;
        
        for(auto a : vec)
        {
            if(!newNode)
            {
                newNode = new Node(a);
                temp = newNode;
            }
            else
            {
                temp->next = new Node(a);
                temp = temp->next;
            }
        }
        
        return newNode;
    }
