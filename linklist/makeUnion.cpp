
struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    set<int>s;
    while(head1)
    {
       s.insert(head1->data);
       head1=head1->next;
    }
     while(head2)
    {
       s.insert(head2->data);
       head2=head2->next;
    }
    Node * newnode=NULL;
    Node * curr=NULL;
    for(auto e :s)
    {
        
       if(!newnode) // false null opp
       {
           newnode= new Node(e);
           curr=newnode;
       }
       else
       {
           curr->next=new Node(e);
           curr=curr->next;
       }
        
    }
    return newnode;
}
