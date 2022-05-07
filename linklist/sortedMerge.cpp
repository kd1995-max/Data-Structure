Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node *curr=NULL;
    Node *temp=NULL;
    while(head1 &&head2)
    {
        if(head1->data <=head2->data)
        {
           if(curr==NULL)
           {
              curr=new Node(head1->data); 
              temp=curr;
           }
           else
           {
               temp->next=new Node(head1->data);
               temp=temp->next;
               
           }
           head1=head1->next;
        }
        else
        {
            
           if(curr==NULL)
           {
              curr=new Node(head2->data); 
              temp=curr;
           }
           else
           {
               temp->next=new Node(head2->data);
               temp=temp->next;
               
           }
           head2=head2->next;
        }
    }

  while(head1)
  {
      temp->next=new Node(head1->data);
      temp=temp->next;
      head1=head1->next;
       
  }

    while(head2)
    {
        temp->next=new Node(head2->data);
        temp=temp->next;
        head2=head2->next;
    }
    
    return curr;
    
}  
