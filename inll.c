#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node* next;
}node;
node* createlist(int n,int *a)
{
	node *head=(node*)malloc(sizeof(node));
	head=NULL;
	node *temp=NULL;
	node *p=NULL;
	for(int i=0;i<n;i++)
	{
		temp=(node*)malloc(sizeof(node));
		temp->data=a[i];
		temp->next=NULL;
		if(head==NULL)
			head=temp;
		else
		{
			p=head;
			while(p->next!=NULL)
				p=p->next;
			p->next=temp;
		}	
	}
	return head;
}
void display(node *head)
{
	node *p=head;
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
}
int main(int argc,const char* argv[])
{
	int n=argc-1;
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=atoi(argv[i+1]);
	}
	node *head=NULL;
	head = createlist(n,a);
	display(head);
	
   return 0;

}
