//Algo--------------------------------------------------------------------------------------------------------
	1. Reverse the linked list
	2. Take two variable of int type named carry and ones
	3. Initialize carry with ones
	4. Take a variable named current of node type and 
          initialize it 
	    with head pointer
	5. Run a loop while current is not NULL
	6. Take a variable sum of int type and add 
            (currents data + carry)
	7. In carry store sum/10
	8. In ones store sum%10
	9. Then in currents data store ones
	10. If currents next becomes NULL
	11. Then break
	12. Increase current by one pointer
	13. End loop
	14. If carry is more than one
	15. In currents next assign new node with carry's data
	16. Reverse back the list
	17. Return head
//Code---------------------------------------------------------------------------------------------------------
Node *reverse(Node *head)
    {
        Node *first = NULL;
        Node *second,*third;
        second=third=head;
        
        while(second)
        {
            third = second->next;
            second->next = first;
            first = second;
            second = third;
        }
        
        return first;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        int carry = 1;
        int ones = 0;
        
        head = reverse(head);
        
        Node *curr = head;
        while(curr)
        {
            int sum = curr->data + carry;
            carry = sum/10;
            ones = sum%10;
            curr->data = ones;
            
            if(!curr->next)  //curr->next==NULL
            break;
            
            curr= curr->next;
            
        }
        
        if(carry > 0)
        {
            curr->next = new Node(carry);
            
        }
        
        head = reverse(head);
        
        return head;
    }
