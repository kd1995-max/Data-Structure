 int getMiddle(Node *head)
    {
        // Your code here
        int res=0;
        if(head==NULL)
        return 0;
        Node* slow=head;
        Node* fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        res=slow->data;
        return res;
    }
