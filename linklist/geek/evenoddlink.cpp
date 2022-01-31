   Node* divide(int N, Node *head)
   {
       Node *temp = head;
        Node *even = NULL;
        Node *ev = NULL;
        Node *odd = NULL;
        Node *od = NULL;
        while(temp){
            if(temp->data%2==0){
                if(even == NULL){
                    even = new Node(temp->data);
                    ev = even;
                } 
                else
                {
                    ev->next = new Node(temp->data);
                    ev=ev->next;
                }
            }
            else
            {
                 if(odd == NULL){
                    odd = new Node(temp->data);
                    od = odd;
                 } 
                    
                else
                {
                    od->next = new Node(temp->data);
                    od=od->next;
                }
            }   
            temp = temp -> next;
        }
           if(od == NULL){
               return even;
           }
           else if (ev == NULL)
           {
               return odd;
           }
            ev->next = odd;    
         return even;
    }
