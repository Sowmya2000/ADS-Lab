#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node* next;
};

node *reverse(node *head,int k)
{
	node* current=head;
	node* next=NULL;
	node* pre=NULL;
	int count=0;
	while(current!=NULL && count<k)
	{
		next=current->next;
		current->next=pre;
		pre=current;
		current=next;
		count++;
	}
	if(next!=NULL)
	head->next=reverse(next,k);
	return pre;
}

void push(node** head_ref,int new_data)
{
	node* new_node= new node();
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}

void printlist(node *node)
{
	while(node!=NULL)
	{
		cout<< node->data <<" ";
		node=node->next;
	}
}

int main()
{
	node* head=NULL;
		push(&head,9);
		push(&head,8);
		push(&head,7);
		push(&head,6);
		push(&head,5);
		push(&head,4);
		push(&head,3);
		push(&head,2);
		push(&head,1);

		cout<<"Given linked list\n"<<endl;
		printlist(head);
		head=reverse(head, 3);
		cout<<"Reversed linked list\n"<<endl;
		printlist(head);
		return 0;
}
