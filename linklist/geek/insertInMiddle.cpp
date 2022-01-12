//Function to insert a node in the middle of the linked list.
// Node* insertInMiddle(Node* head, int x)
// {
//   if(head==NULL)return head;
//     Node *slow=head,*fast=head;
//     while(fast && fast->next&& fast->next->next){
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     Node *temp = new Node(x);
//     Node *temp1;
//     temp1 = slow->next;
//     slow->next = temp;
//     temp->next = temp1;
// return head;
// }
Node* insertInMiddle(Node* head, int x)
{
   Node *newnode;
   Node *slow = head, *fast = head->next;
   
   while(fast != NULL && fast->next != NULL)
   {
       slow = slow->next; fast = fast->next->next;
   }
   newnode = new Node(x);
   newnode->next = slow->next;
   slow->next = newnode;
   return head;

}
