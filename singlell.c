#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
node getnode();
null;
};
typedef struct node *node;
node create()
node insert_front(int item, node head);
{
node head = null;
head = insert front(10,head);
head = insert front(20,head);
return (head);
}
node insert_front(int item, node head);
{
node p;
p = getnode();
p -> data = item;
p -> next = head;
head = p;
return head;
}
head = null;
node getnode();
{
null p;
p = (node) malloc (size of (struct node);
if(p! = null)
return p;
else
{
printf("memory could not be allocated\n");
exit(0);
}
}
void insert_end(node head, int item)
{
node p,q;
q = getnode();
q -> data = item;
p = head;
while(p->next = null)
{
p = p-> next;
}
p -> next = q;
q -> next = null;
}
node insert_pos(node head, int item,int pos)
{
node curr, prev = null, new n;
int count = 1;
new n = getnode();
new n -> data = item;
new n -> next = null;
if(head == null)
{
if (pos == 1)
{
return new n;
else
{
printf("invalid position\n");
return head;
}
}
if(pos == 1)
{
new -> next = head;
head = new n;
return head;
}
else
{
curr = head;
while (curr! = null && count = pos)
{
prev = curr;
curr = curr -> next;
count++;
}
if (count == pos)
{
prev -> next = new n;
new n -> next = curr;
return head;
}
else
{
printf("invalid position \n");
return head;
}
}
}
void display (node head)
node getdata();
{
node p;
if (head == null)
{
printf("list is empty \n");
exit(0);
}
p = head;
while(p! = null)
{
printf("%d", p->data);
p = p->next;
}
}
int main()
{
int choice;
while (1)
{
printf(" 1.create \n");
printf(" 2.insert front \n");
printf(" 3.insert end\n");
printf(" 4.insert at given position\n");
printf("4.display\n");
switch(choice)
{
case1: create();
       break;
case2: insertfront();
       break;
case3: insertend();
       break;
case4: display();
       break;
case5: exit(0);
       break;
default: printf("invalid choice \n");
}
}
}


