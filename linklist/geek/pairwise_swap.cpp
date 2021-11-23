struct Node* pairwise_swap(struct Node* head)
{
    // your code here
    Node* curr = head;
    while(curr and curr->next)
    {
        swap(curr->data , curr->next->data);
        curr=curr->next->next;
    }
    return head;
}
