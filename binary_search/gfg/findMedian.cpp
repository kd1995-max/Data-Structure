int val=0;
int fetchElement(Node *root,int N, int &i)
{
    if(!root)
    return 0;
    fetchElement(root->left,N,i);
    i++;
    if(i==N)
        val=root->data;
    fetchElement(root->right,N,i);
}
int count(Node *root)
{
    if(!root)
    return 0;
    return 1+count(root->left)+count(root->right); 
}
float findMedian(struct Node *root)
{
      //Code here
      
     int i=0;
     int N =count(root);
     
     if(N%2==0)
     {
         fetchElement(root,N/2,i);
         int a=val;
         int i=0;
         fetchElement(root,(N/2 + 1),i);
         int b=val;
         return (a+b)/2.0;
     }
     else
     {
         fetchElement(root,(N+1)/2,i);
         int a=val;
         return a;
     }
}
