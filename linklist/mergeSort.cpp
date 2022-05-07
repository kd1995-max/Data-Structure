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
        Node *ptr = NULL;
        
        for(auto a : vec)
        {
            if(!newNode)
            {
                newNode = new Node(a);
                ptr = newNode;
            }
            else
            {
                ptr->next = new Node(a);
                ptr = ptr->next;
            }
        }
        
        return newNode;
    }
