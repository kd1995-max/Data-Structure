

//code-------------------------------------------------------------------------------------------------------------
Node* sortedMerge(Node* head1, Node* head2)  
{  

Node *curr=NULL;
Node *temp=NULL;
while(head1 && head2)
{
    if(head1->data <= head2->data)
    {
        if(curr==NULL)
        {
            curr=new Node(head1->data);
            temp=curr;
        }
        else
        {
            temp->next=new Node(head1->data);
            temp=temp->next;
        }
        head1=head1->next;
    }
    else
    {
        
        if(curr==NULL)
        {
            curr=new Node(head2->data);
            temp=curr;
        }
        else
        {
            temp->next=new Node(head2->data);
            temp=temp->next;
            
        }
        head2=head2->next;
    }
    
}   
    if(head1 && !head2)
    {
       while(head1)
       {
           temp->next=new Node(head1->data);
           temp=temp->next;
           head1=head1->next;
           
       }
    }
    else
    {
        while(head2)
        {
            temp->next=new Node(head2->data);
            temp=temp->next;
            head2=head2->next;
        }
    }
    return curr;

}  


//Algorithm-----------------------------------------------------------------------------------------------------------
	1. Create two variable named newNode and temp of Node type.
	2. Run a loop till head1 and head2 becomes null
	3. If head1's data becomes less than or equal to 
	Head2's data.
	4. //creating new Node
	
	• If newNode variable was found to be NULL
	Then
	Assign memory to newNode using new keyword with head1's data as content of the newNode
	
	Assign the memory address of newNode to temp
	Temp = newNode
	Endif
	
	• Else if found that newNode is not empty
	Assign memory to temp's next using new keyword with head1's data as content of newNode.
	Increase the temp
	EndElse
	
	Increment the head1
	5. EndIf
	6. Else if found that head2 data is less than head1's data  
	7. //create a new Node
	• If newNode variable was found to be NULL
	Then
	Assign memory to newNode using new keyword with head2's data as content of the newNode
	
	Assign the memory address of newNode to temp
	Temp = newNode
	Endif
	
	• Else if found that newNode is not empty
	Assign memory to temp's next using new keyword with head2's data as content of newNode.
	Increase the temp
	EndElse
	
	Increment the head2
	8. End loop
	9. If head1 is not NULL but head2 is NULL
	10. Run a loop until head1 becomes NULL
	11. Assign memmory to temp's next Node and head1 data as its content
	12. Increase temp
	13. Increase head1
	14. End loop
	15. End if
	16. Else if head1 is NULL and head2 is not NULL
	17. Run a loop until head2 becomes NULL
	18. Assign memmory to temp's next Node and head2 data as its content
	19. Increase temp
	20. Increase head2
	21. End loop
	22. End if
	23.Return newNode



