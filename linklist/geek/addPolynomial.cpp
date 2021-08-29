   Node* addPolynomial(Node *p1, Node *p2)
    {
        //Your code here
        Node *curr=NULL;
        Node *temp=NULL;
        while(p1 && p2)
        {
            if(p1->pow < p2->pow)
            {
                if(curr==NULL)
                {
                    curr=new Node(p2->coeff,p2->pow);
                    temp=curr;
                }
                else
                {
                    temp->next=new Node(p2->coeff,p2->pow);
                    temp=temp->next;
                }
                p2=p2->next;
            }
            else if(p1->pow > p2->pow)
            {
                if(curr==NULL)
                {
                    curr=new Node(p1->coeff,p1->pow);
                    temp=curr;
                }
                else
                {
                    temp->next=new Node(p1->coeff,p1->pow);
                    temp=temp->next;
                }
                p1=p1->next;
            }
            else if(p1->pow==p2->pow)
            {
                if(curr==NULL)
                {
                    curr=new Node(p1->coeff +p2-> coeff , p1->pow);
                    temp=curr;
                }
                else
                {
                    temp->next=new Node(p1->coeff+p2->coeff,p1->pow);
                    temp=temp->next;
                }
                
                p1=p1->next;
                p2=p2->next;
            }
            
        } 
        
        if(p1 && !p2)
        {
            while(p1)
            {
                temp->next=new Node(p1->coeff,p1->pow);
                temp=temp->next;
                p1=p1->next;
            }
        }
            
         else
         {
            while(p2)
            {
               temp->next=new Node(p2->coeff,p2->pow);
                temp=temp->next;
                p2=p2->next; 
            }
             
         }
        
      return curr;  
    }
