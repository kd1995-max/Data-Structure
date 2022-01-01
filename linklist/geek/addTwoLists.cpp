 Node *reverse(Node *head){
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL){
        Node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
 Node* addTwoLists(struct Node *first,struct Node *second){
        first = reverse(first);
        second = reverse(second);
    Node* res = NULL;
    Node *temp, *prev = NULL;
    int carry = 0, sum;
 
    while (first != NULL || second != NULL) {
 
        sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
 
        carry = (sum >= 10) ? 1 : 0;
 
        sum = sum % 10;
 
        temp = new Node(sum);
 
        if (res == NULL)
            res = temp;
 
        else
            prev->next = temp;
 
        prev = temp;
 
        if (first)
            first = first->next;
        if (second)
            second = second->next;
    }
 
    if (carry > 0)
        temp->next = new Node(carry);
 
    res = reverse(res);
    return res;
    }
