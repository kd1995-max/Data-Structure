 struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if(head==NULL) return NULL;
        node *first,*second,*third;
        first=NULL;
        second=third=head;
        int count=0;
        while(second &&count<k)
        {
            third=second->next;
            second->next=first;
            first=second;
            second=third;
            count++;
        }
        if(third)
        {
            head->next=reverse(third,k);
        }
        return first;
    }
