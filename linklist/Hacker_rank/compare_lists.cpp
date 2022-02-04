bool compare_lists(SinglyLinkedListNode* headA, SinglyLinkedListNode* headB) {

if (headA == NULL && headB == NULL) {
    return 1;
} else if (headA == NULL || headB == NULL) {
    return 0;
}

if (headA->data == headB->data) {
    return compare_lists(headA->next, headB->next);
} else {
    return 0;
}
}
