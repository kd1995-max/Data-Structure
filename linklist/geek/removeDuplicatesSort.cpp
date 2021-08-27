 Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_map<int,int>m;
     Node *curr=head;
     Node *prev=head;
     m[curr->data]=1;
     curr=curr->next;
     while(curr!=NULL)
     {
         if(m[curr->data])
         {
            prev->next=curr->next;
            free(curr);
         }
         else
         {
             m[curr->data]=1;
             prev=curr;
         }
         curr=prev->next;
        
     }
      return head;
     
    }
