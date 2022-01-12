 
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node *temp1=new Node(x);
       if(head==NULL)
       return temp1;
       
       Node *temp=head;
       while(temp->next!=NULL)
       {
           temp=temp->next;
       }
       temp->next=temp1;
       return head;
    }
