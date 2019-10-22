
#include<stdlib.h>
#include<stdio.h>

struct node
{
	int data;
 struct node *next;
};
typedef struct node *Node;

Node getnode()
{
 Node x;
 x=(Node) malloc (sizeof(Node));
 if(x!=NULL)
 return x;
 else
 {
 printf("Memory is not allocated");
 exit(0);
 }
}
Node insert_front(Node head,int item)
{
 Node temp;
 temp=getnode();
 temp->data=item;
 temp->next=head;
 head=temp;
 return head;
}


Node concatinate(Node head1,Node head2)
{
NODE curr;
if(head1==NULL)
{
return head2;
}
if(head2==NULL)
{
return head1;
}
curr=head1;
while(curr->next!=NULL)
{
curr=curr->next;
curr->next=head2;
return head1;
}
 void sort(Node head)
{
NODE p=head;
NODE q=NULL;
int temp;
if(head==NULL)
return;
while(p->next!=NULL)
{
q=p->next;
while(q!=NULL)
{
if(p->data > q->data)
{
temp=p->data;
p->data=q->data;
q->data=temp;
}
q=q->next;
}
p=p->next;
}
}
NODE reverse(NODE head)
{
NODE curr=head;
NODE prev=NULL;
NODE nextn=NULL;
if(head==NULL)
{
printf("list is empty\n");
return head;
}
if(head->next==NULL)
{
return head;
}
while(curr!=NULL)
{
nextn=curr->next;
curr->next=prev;
prev=curr;
curr=nextn;
}
head=prev;
return head;
}
void display(Node head)
{
NODE curr;
if(head==NULL)
{
printf("list is empty");
return;
}
printf("the contents of the singly linked list\n");
curr=head;
while(curr!=null)
{
printf("%d",curr->data);
curr=curr->next;
}
printf("\n");
}
int main()
{
 Node head1=NULL;
 Node head2=NULL;
 int choice,value;
 while(1)
	{
	printf("1.Insert the node for list 1 at the front\n");
	printf("2.Insert the node for list 2 at the front\n");
	printf("3.concatinate the list\n");
	printf("4.sort the list\n");
        printf("5.reverse the list\n");
	printf("6.Display \n");
	printf("7.Exit\n");
	scanf("%d",&choice);
 switch(choice)
 {
 case 1: printf("Enter the element to be inserted: ");
 scanf("%d",&value);
 head1=insert_front(head1,value);
 break;
 case 2: printf("Enter the element to be inserted: ");
 scanf("%d",&value);
 head2=insert_front(head2,value);
 break;
 case 3:  head1=concatinate(head1,head2);
 break; 
 case 4: head1=sort(head1);
 break;
 case 5:head1=reverse(head1);
 break;
 case 6: display(head);
 break;
 case 7: exit(0);
 default: printf("Invalid choice\n");
 }
 }
 return 0;
}
