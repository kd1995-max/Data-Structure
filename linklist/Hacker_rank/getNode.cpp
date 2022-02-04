int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
 int index = 0;
    SinglyLinkedListNode* current = llist;
    SinglyLinkedListNode* result = llist;
    while(current!=NULL)
    {
        current=current->next;
        if (index++>positionFromTail)
        {
            result=result->next;
        }
    }
    return result->data;
}
