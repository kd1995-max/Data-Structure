 bool detectLoop(Node* head)
    {
        // method 1
    //     unordered_set<Node*> s; 
    //     while(head) {  
        
    //     if (s.find(head) != s.end()) 
    //         return true; 
        
    //     s.insert(head); 
    //     head = head->next;
    // } 
    
    // return false;
        
    // }
    
    
    //  Method 2 (Floyd cycle)
    
//  1. First take two variables named slow and fast of Node type and initialize it with head.
// 	2. Run a loop until fast gets NULL.
// 	3. Slow will move 1 step 
// 	4. Fast will move two steps
// 	5. If slow and fast are pointing at the same location then loop exist
// 	6. Return true
// 	7. End loop
// 	8. End if
// 	9. Return false;
    
    Node *slow,*fast;
    slow=fast=head;
    while(fast &&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    
    if(slow==fast)
     return true;
    }
    return false;
    }
    
