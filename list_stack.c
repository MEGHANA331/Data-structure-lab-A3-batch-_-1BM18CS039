#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
typedef struct node *NODE;
NODE push_insert_front(int item,NODE head);
NODE pop_delete_front(NODE head);
NODE getnode();
void display(NODE head);
NODE push_insert_front(int item,NODE head)
{
NODE p;
p = getnode();
p-> data = item;
p-> next = head;
head = p;
return head;
}
NODE head = NULL;
NODE getnode()
{
NODE p;
p = (NODE)malloc(sizeof(struct node));
if(p!=NULL)
{
return p;
}
else
{
printf("memory could not be allocated \n");
exit(0);
}
}
NODE pop_delete_front(NODE head)
{
NODE p = head;
if(head == NULL)
{
printf("list is empty\n");
return head;
}
printf("deleted element is: %d\n",p->data);
head = p->next;
free(p);
return head;
}
void display(NODE head)
{

NODE p;
if(head == NULL)
{
printf("list is empty\n");
exit(0);
}
p = head;
while(p!= NULL)
{
printf("%d\n",p->data);
printf("\n");
p = p->next;
}
}

int main()
{
NODE head=NULL;
int choice,item;
do
{
printf("stack menu\n");
printf("1.push\n""2.pop\n""3.display\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the item you wanna insert:\n"); 
scanf("%d\n",&item);
        head = push_insert_front(item,head);
        break;
case 2: head=pop_delete_front(head);
        break;
case 3: display(head);
        break;
case 4:break;
default:printf("invalid input\n");
};
}while(choice!=4);
return 0;
}
