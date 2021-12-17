  Node * mergeKLists(Node *arr[], int k)
    {
           // Your code here
           vector<int> vec;
           for(int i=0;i<k;i++)
           {
               while(arr[i])
               {
                   vec.push_back(arr[i]->data);
                   arr[i]=arr[i]->next;
               }
           }
           sort(vec.begin(),vec.end());
           int n=vec.size();
           Node * curr=NULL;
           Node * temp=NULL;
           
           for(int i=0;i<n;i++)
           {
               if(curr==NULL)
               {
                   curr= new Node(vec[i]);
                   temp=curr;
               }
               else
               {
                   temp->next=new Node(vec[i]);
                   temp=temp->next;
               }
           }
           return curr;
    }
