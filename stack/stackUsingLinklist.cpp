void MyStack ::push(int x) 
{
    // Your Code
    StackNode *temp = new StackNode(x);
    temp->next = top;
    top = temp;
}
 
//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    StackNode *temp;
    // Your Code
    if(top == NULL) return -1;
    else{
        temp = top;
        int da = top->data;
        top = top -> next;
        temp->next = NULL;
        delete(temp);
        return da;
    }
}
