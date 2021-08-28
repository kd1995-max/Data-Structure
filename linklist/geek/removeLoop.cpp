  void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        
//     1. Take two pointers named fast and slow of type Node and 
//       initialize it with head pointer.
// 	2. Run a loop until fast and fast's next becomes NULL
// 	3. Increase slow by 1
// 	4. Increase fast by 2
// 	5. If slow is equal to head 
// 	6. Break the loop
// 	7. End if
// 	8. End loop
// 	9. If slow and fast both are pointing to head <<<---- Corner Case
// 	10. Run a loop until fast's next becomes not equal to slow
// 	11. Increment fast by one
// 	12. End loop
// 	13. Make fast->next=NULL
// 	14. End if
//  15. If fast and slow bot are equal and not pointing to head
// 	16. Shift slow pointer to head
// 	17. Run a loop until slow->next is not equal to fast->next
// 	18. Increase slow by 1 position
// 	19. Increase fast by one position
// 	20. End loop
// 	21. Make fast->next=NULL
//  22. End if
        
        Node *fast,*slow;
        slow=fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)     
              break;
        }
       if(slow==head && fast == head)  
        {
            while(fast->next!=slow)
            {
                fast=fast->next;
            }
            fast->next=NULL;
        }
        else if(slow==fast && fast!=head && slow!=head)
        {
             slow=head;
             while(slow->next!=fast->next)
             {
                slow=slow->next;
                fast=fast->next;
             }
             fast->next=NULL;
        }
    }
