SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
     if(head==NULL || head->next==NULL)
     return head;
    SinglyLinkedListNode *curr=head;
    while(curr->next!= NULL)
    {
        if(curr->data == curr->next->data)
        {
        curr->next=curr->next->next;
            continue;
       }
       curr=curr->next;
    }
    return head;
}
