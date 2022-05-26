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

// method 2:
   ListNode* swapNodes(ListNode* head, int k) {
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *temp=head;
        for(int i=0;i<k;i++)
        {
            fast=fast->next;
        }
        
        while(fast!= NULL)
        {
           fast=fast->next; 
           slow=slow->next;
        }
        for(int i=1;i<k;i++)
        {
           temp=temp->next; 
        }
        swap(slow->val,temp->val);
        return head;
       
    }
