 Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
         Node *temp=head;
        vector<int> vec;
        while(temp!=NULL){
            vec.push_back(temp->data);
            temp=temp->next;
        }
        reverse(vec.begin() + m - 1, vec.begin() + n);
        temp = head;
        int i = 0;
        while(temp!=NULL){
            temp->data = vec[i++];
            temp=temp->next;
        }
        return head;
        
    }
