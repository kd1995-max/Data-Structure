struct Node* reverseList(struct Node *head)
    {
       
        Node *first, *second, *third;
        
        first =  NULL;
        second = third = head;
        
        third = head;
        
        while(second)
        {
                third = second->next;
                second->next = first;
                first = second;
                second = third;
        }
        
        return first;
        
        
    }
