ListNode* swapNodes(ListNode* head, int k) {
        if(!head)
            return head;
        vector<int> vec;
        int n = 0;
        
        while(head!= NULL)
        {
            vec.push_back(head->val);
            head=head->next;
            n++;
        }

        swap(vec[k-1],vec[n-k]);
        
        ListNode *newNode = NULL;
        ListNode *curr = NULL;
        
        
        for(auto a : vec)
        {
            if(!newNode)
            {
                newNode = new ListNode(a);
                curr = newNode;
            }
            else
            {
                curr -> next = new ListNode(a);
                curr = curr-> next;
            }
        }
        
        return newNode;
    }
