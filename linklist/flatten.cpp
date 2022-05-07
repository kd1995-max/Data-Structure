Node * mergesort(Node* head1, Node* head2){
   
   if(head1 == NULL)
       return head2;
       
   if(head2 == NULL)
       return head1;
   
   Node *ans = new Node(-1);
   Node *tail = ans;
   
   while(head1 && head2){
       if(head1->data < head2->data){
           tail->bottom = head1;
           head1 = head1->bottom;
       }else{
           tail->bottom = head2;
           head2 = head2->bottom;
       }
       tail = tail->bottom;
   }
   
   if(head1){
       tail->bottom = head1;
   }
   
   if(head2){
       tail->bottom = head2;
   }
   
   return ans->bottom;
}
   
Node *flatten(Node *root)
{
  // Your code here
   struct Node *ans=NULL;
   struct Node *curr = root; 
   while(curr != NULL){
       ans = mergesort(ans, curr);
       curr = curr->next;
   }
  return ans;
}
