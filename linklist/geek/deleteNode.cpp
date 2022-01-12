   void deleteNode(Node *del)
    {
       // Your code here 
       Node *temp=del->next;
       del->data=del->next->data;
       del->next=del->next->next;
       free(temp);
    }
