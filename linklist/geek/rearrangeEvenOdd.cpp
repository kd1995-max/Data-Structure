  void rearrangeEvenOdd(Node *head)
    {
       // Your Code here
       Node * odd=head;
       Node *even=head->next;
       Node * evenstart=even;
       while(odd->next &&even->next)
       {
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
       }
       odd->next=evenstart;
       
    }


//method 2:
 void rearrangeEvenOdd(Node *head)
    {
       // Your Code here
       Node *even=new Node(-1);
       Node *even_point=even;
       Node *odd=new Node(-1);
       Node *odd_point=odd;
       
       int flag=true;
       while(head)
       {
         if(flag)
         {
             odd_point->next=head;
             odd_point=odd_point->next;
             flag=!flag;
         }
         else
         {
            even_point->next=head;
            even_point=even_point->next;
            flag=!flag;
         }
         head=head->next;
       }
       
       odd_point->next=even->next;
       even_point->next=NULL;
    }
