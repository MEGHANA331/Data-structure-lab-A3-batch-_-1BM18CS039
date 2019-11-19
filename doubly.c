#include<stdlib.h>
#include<stdio.h>

struct node
{
int data;
 struct node *left;
 struct node *right;
};
typedef struct node *Node;

Node getnode()
{
 Node p;
 p=(Node) malloc (sizeof(Node));
 if(p!=NULL)
 return p;
 else
 {
 printf("Memory is not allocated");
 exit(0);
 }
}
Node insert_left(Node head,int item)
{
 Node temp;
 temp=getnode();
 temp->data=item;
 temp->right=NULL;
 temp->left=NULL;
 if (head==NULL)
 return temp;
 else
 {
  temp->right=head;
  head->left=temp;
  head=temp;
  return head;
 }
}
Node delete(Node head,int val)
{
 int value=val;
 Node temp,prev,pos;
 temp=head;
 prev=NULL;
  while(temp->right!=NULL&&temp->data!=value)
  {
   prev=temp;
   temp=temp->right;
   
   }
   if(temp->data==value)
   {if (temp==head)
    {temp=temp->right;
     head=temp;
     }
     else
     {
     
    pos=temp->right;
    pos->left=prev;
    prev->right=pos;
    free(temp);
    }
    }
    else
    {
     printf("value not found");
     }
     return head;
    }
   void display(Node head)
{
Node temp;
 if(head==NULL)
 {
 printf("list is empty\n");
 }
 else
 {
 temp=head;
 printf("Element in the list: ");
 while(temp!=NULL)
 {
 printf("%d ",temp->data);
 temp=temp->right;
 }
 printf("\n");
 }
}
int main()
{
 Node head=NULL;
 int ch,value,pos;
 while(1)
{
printf("1.Insert \n");
printf("2.delete\n");
printf("3.display\n");
printf("4.Exit\n");
scanf("%d",&ch);
 switch(ch)
 {
 case 1: printf("Enter the element to be inserted: ");
 scanf("%d",&value);
 head=insert_left(head,value);
 break;
 case 2: printf("enter the value to be deleted: ");
 scanf("%d",&value);
 head=delete(head,value);
 break;
 case 3: display(head);
 break;
 case 4: exit(0);
 default: printf("Invalid choice\n");
 }
 }
 
 }

