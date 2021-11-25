SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
  SinglyLinkedListNode * first=NULL;
    SinglyLinkedListNode * second=llist;
    SinglyLinkedListNode * third=llist;
    
    if(llist==NULL)
    return llist;
    
    while(second)
    {
        third=second->next;
        second->next=first;
        first=second;
        second=third;
    }
    return first;
}
