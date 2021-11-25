SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    
    if(llist==NULL)
    return llist;
    if(position==0)
    return llist->next;
    SinglyLinkedListNode* current=llist;
    for (int i=1; i<position; ++i) {
    current=current->next;
    }
    current->next=current->next->next;
    return llist;  
}

