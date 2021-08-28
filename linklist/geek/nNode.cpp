int getNthFromLast(Node *head, int n)
{
       // Your code here
  
//   1.Take a variable named curr ofNodetypestore head in it
// 2.take another variable named n and store 0
// 3.run a loop curr becomes null
// 4.increase n by one and curr to next
// 5.end loop
// 6.again re-initialize curr to head
// 7.take a variable names posand find the position from starting 
//   using n - k + 1
// 8.if pos becomes less than zero then the request which has 
//   been made is out of the range
// 9.return -1
// 10.end if
// 11. run a loop from 1 to less than pos
// 12.increase the curr
// 13.end loop
// 14.return curr data
  
  
//   Naive Approch
//   Node *curr=head;
//   int c=0;
//   while(curr)
//   {
//       c++;
//       curr=curr->next;
//   }
//   curr=head;
//   int pos=c-n;
//   if(pos<0) return -1;
//   for(int i=1;i<=pos;i++)
//   {
//       curr=curr->next;
//   }
  
//   return curr->data;
  
  //Efficient approch
  
//  1. Take two pointers of Node type first and second
// 	2. Initialize first and second with head
// 	3. Run a loop till n.
// 	4. Increase second
// 	5. Loop ends
// 	6. Run a loop until second->next becomes NULL
// 	7. Increment first
// 	8. Increment second
// 	9. End loop
// 	10. Return first -> data
  Node *first=head;
  Node *second=head;
  for(int i=0;i<n;i++)
  {
      if(second==NULL)
        return -1;
      second=second->next;
  }
  while(second)
  {
      first=first->next;
      second=second->next;
  }
  return first->data;
        
}
