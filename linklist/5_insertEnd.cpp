#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int x)
	{
		data=x;
		next=NULL;
	}
};
void printList( Node *head)
{
	// if(head==NULL)
	// return ;
	// cout<<head->data<<" ";
	//  printList(head->next);
	Node *curr=head;
	while(curr!=NULL)
	{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<endl;
}
Node *insertEnd(Node *head,int x)
{
	
	Node *curr=head;
	Node *temp=new Node(x);
	if(curr==NULL)
	return temp;
	while(curr->next!=NULL)
	{
		curr=curr->next;
	}
	curr->next=temp;
	return head;
}
int main() {
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	printList(head);
	head=insertEnd(head,40);
	printList(head);
	return 0;
}
//output:10 20 30 
//       10 20 30 40
