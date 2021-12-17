 Node *MergeTwo(Node *x,Node *y)
    {
         Node *res=NULL;
       if(x==NULL)
       return y;
       else if(y==NULL)
       return x;
       
       if(x->data <= y->data)
       {
           res=x;
           res->next=MergeTwo(x->next,y);
       }
       else
       {
           res=y;
           res->next=MergeTwo(x,y->next);
       }
       return res;
    }
    Node * mergeKLists(Node *arr[], int k)
    {
           // Your code here
        int l=0;
        int last=k-1;
        int r;
        while(last !=0)
        {
            l=0;
            r=last;
            
            while(l<r)
            {
                arr[l]=MergeTwo(arr[l],arr[r]);
                l++;
                r--;
                if(l>=r)
                last=r;
            }
        }
        return arr[0];
    }
