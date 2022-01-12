Node *removeDuplicates(Node *head)
{
 
 //  1. Take a node name current pointing to the head
// 	2. Run a loop till current becomes empty and current next becomes empty
// 	3. Take another pointer named temp which will point to the next to the 
//     current pointer.
// 	4. Run another loop which will run till temp becomes empty.
// 	5. When loop terminates current next is pointing to the Non duplicate
//   element so make current's next pointer to point to temp pointer.
	
    Node *curr=head;
    
    while(curr!=NULL && curr->next!=NULL)
    {
        Node *temp=curr->next;
        while(temp!=NULL &&temp->data==curr->data)
        {
            temp=temp->next;
        }
        curr->next=temp;
        curr=curr->next;
    }
    return head;
}


//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
  Node *temp = head;
    while(temp->next!=NULL){
        if(temp->data == temp->next->data){
            temp->next = temp->next->next;
			continue;
        }
        temp=temp->next;
    }
    return head;
}
