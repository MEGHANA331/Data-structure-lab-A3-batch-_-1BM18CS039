#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
struct node *pos;
struct node *link;

};
typedef struct node * NODE;
NODE getnode()
{
NODE p;
p=(NODE)malloc(sizeof(struct node));
if(p!=NULL)
return p;
else
{
printf("No memory allocatipon\n");
exit(0);
}
}
NODE insert_front(NODE head,int item)
{
NODE p;
p=getnode();
p->data=item;
p->next=head;
head=p;
return head;
}
NODE delete_front(NODE head)
{
NODE p=head;
if(head==NULL)
{
printf("list is empty\n");
return head;
}
printf("deleted element is = %d\n",p->data);
head=p->next;
free(p);
return head;
}
void display(NODE head)
{
NODE p;
if(head==NULL)
{
printf("List is empty\n");
exit(0);
}
p=head;
while(p!=NULL)
{
printf("%d\n",p->data);
p=p->next;
}
}
NODE insert_rear(NODE head,int item)
{
NODE p,q;
q=getnode();
q->data=item;
q->next=NULL;
	
if(head==NULL)
{
			
return q;
}
p=head;
while(p->next!=NULL)
p=p->next;
p->next=q;
return head;
	
}
NODE delete_rear(NODE head)
{
NODE p,q;
p=head;
if(head==NULL)
{
printf("list is empty\n");
return head;
}
while(p->next!=NULL)
{
q=p;
p=p->next;
printf("the deleted element is=%d\n",p->data);
}
q->next=NULL;
free(p);
return head;
}
NODE insert_pos(NODE head,int item,int pos)
{
NODE curr,prev=NULL,newn;
int count=1;
newn=getnode();
newn->data=item;
newn->next=NULL;
if(head==NULL)
{
if(pos==1)
return newn;
else
{
printf("Invalid position\n");
return 0;
}
}
if(pos==1)
{
newn->next=head;
head=newn;
return head;
}
else
{
curr=head;
while(curr!=NULL&&count!=pos)
{
prev=curr;
curr=curr->next;
count++;
}
if(count==pos)
{
prev->next=newn;
newn->next=curr;
return head;
}
else
{
printf("Invalid position\n");
return head;		}
}
}
NODE delete_pos(int key, NODE head, int pos)
{
NODE prev,curr;
if(pos&&NULL)
{
printf("list is empty\n");
return NULL;
}
if(key&&head->pos)
{
curr=head;
head=head->link;
free(curr);
return head;
}
prev=NULL;
curr=head;
while(curr!=NULL)
{
if(key&&curr->pos)
break;
prev=curr;
curr=curr->link;
}
if(curr==NULL)
{
printf("search is unsuccessfull\n");
return head;
}
prev->link=curr->link;
free(curr);
return head;
}
int main()
{
NODE head=NULL;
int option,ele,pos,value,key;
while(1)
{
printf("1.Insert front\n2.INsert end\n3.Insert position\n4.Display\n5.Delete front\n6.Delete rear\n7.Delete position\n8.Exit\n");
printf("Enter option\n");
scanf("%d",&option);
switch(option)
{
case 1: printf("Enter element to be inserted\n");
	scanf("%d",&ele);
	head=insert_front(head,ele);
	break;
case 2: printf("Enter element to be inserted\n");
	scanf("%d",&ele);
	head=insert_rear(head,ele);
	break;
case 3:printf("Enter position and value\n");
       scanf("%d%d",&pos,&value);
       head=insert_pos(head,value,pos);
       break;
case 4:printf("Elements in list are\n");
       display(head);
       break;
case 5:printf("The deleted element at front end\n");
       delete_front(head);
       break;
case 6:printf("The deleted element at rear end\n");
       delete_rear(head);
       break;
case 7:printf("The deleted element at given position\n");
       delete_pos(key,head,pos);
       break;
case 8:
       exit(0);
				
}
}
return 0;
}
