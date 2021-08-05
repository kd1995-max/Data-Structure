#include <iostream>
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
void RprintList(Node *head)
{
	if(head==NULL)
	return;
	cout<<head->data<<" ";
	RprintList(head->next);
}
int main() {
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	RprintList(head);
	return 0;
}
//output:10 20 30
