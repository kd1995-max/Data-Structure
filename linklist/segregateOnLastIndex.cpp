ListNode *getPivot(ListNode *head)
{
    if(head==NULL)
    return head;

    while(head->next !=NULL)
    {
       head= head->next;
    }
    return head;
}
ListNode *segregateOnLastIndex(ListNode *head)
{
   if(head == NULL || head->next == NULL)
   return head;

   ListNode *pivot=getPivot(head);

    ListNode *small=new ListNode(-1);
    ListNode *ps=small;

    ListNode *large=new ListNode(-1);
    ListNode *pl=large;

    ListNode *curr=head;

    while(curr!=NULL)
    {
        if(curr->val <= pivot->val)
        {
        ps->next=curr;
        ps=ps->next;
        }
        else
        {
            pl->next=curr;
            pl=pl->next;
        }
        curr=curr->next;
    }
    ps->next=large->next;
    pl->next=NULL;
    return ps;

}
