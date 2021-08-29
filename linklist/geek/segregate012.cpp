  Node* segregate(Node *head) {
        
        // Add code here
        Node *curr_zero = NULL;
        Node *curr_one = NULL;
        Node *curr_two = NULL;
        Node *temp1,*temp2,*temp3;
        
        while(head)
        {
            if(head->data == 0)
            {
                if(curr_zero == NULL)
                {
                    curr_zero = new Node(0);
                    temp1 = curr_zero;
                }
                else{
                    temp1->next = new Node(0);
                    temp1 = temp1->next;
                }
            }
            else if(head->data == 1)
            {
                if(curr_one == NULL)
                {
                    curr_one = new Node(1);
                    temp2 = curr_one;
                }
                else{
                    temp2->next = new Node(1);
                    temp2 = temp2->next;
                }
            }
            else if(head->data == 2)
            {
                if(curr_two == NULL)
                {
                    curr_two = new Node(2);
                    temp3 = curr_two;
                }
                else{
                    temp3->next = new Node(2);
                    temp3 = temp3->next;
                }
            }
            head = head->next;
        }
        
        if(curr_zero && curr_one && curr_two)
        {
            temp1->next = curr_one;
            temp2->next = curr_two;
        }
        else if(curr_zero && curr_two)
        {
            temp1->next = curr_two;
        }
        else if(curr_zero && curr_one)
        {
            temp1->next = curr_one;
        }
        else if(curr_one && curr_two)
        {
            curr_one->next = curr_two;
            return curr_one;
        }
        else if(curr_zero && !curr_one && !curr_two)
            return curr_zero;
        else if(!curr_zero && curr_one && !curr_two)
            return curr_one;
        else if(!curr_zero && !curr_one && curr_two)
             return curr_two;
             
             
        return curr_zero;
        
        
    }
