#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*rlink;
struct node*llink;
};
struct node*head=NULL;
void insert_at_beginning(void);
void insert_at_end(void);
void insert_at_specific_point(void);
int length_of_link_list(void);
void display(void);
int main()
{
  int x,ch;
  while(1)
    {
  printf("--------------------------");
  printf("1.insert_at_beggining\n");
  printf("2.insert_at_end\n");
  printf("3.insert_at_specific_point\n");
  printf("4.length_of_link_list\n");
  printf("5.Display the link list");
  printf("---------------------------");
  printf("enter your choice");
  scanf("%d",&ch);
  switch(ch)
    {
      case 1:insert_at_beginning();
      break;
      case 2:insert_at_end();
      break;
      case 3:insert_at_specific_point();
      break;
      case 4:length_of_link_list();
      break;
      case 5:display();
      break;
      case 6:exit(0);
      default : printf("invalid choice");
    }
      }
  return 0;
}
void display()
{
  struct node*temp;
  if(head==NULL)
  {
    printf("there are no elements to display");
  }
  else{
    temp=head;
  while(temp!=NULL)
    {
      printf("%d",temp->data);
      temp=temp->rlink;
    }
}
  }
int length_of_link_list()
{
  int len;
  struct node*temp;
  temp=head;
  while(temp->rlink!=NULL)
    {
      printf("length of the link list is")
    }
}
void insert_at_beginning()
{
  struct node*temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("enter the data to insert\n");
  scanf("%d",&temp->data)
  temp->rlink=NULL;
  temp->llink=NULL;
  if(head==NULL)
  {
    head=temp;
  }
  else
  {
  temp->rlink=head;
  head->llink=temp;
  head=temp;
  }
}
void insert_at_end()
{
  struct node*temp;
  struct node*p;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("enter the elements to insert at end");
  scanf("%d",&temp->data);
  temp->rlink=NULL;
  temp->llink=NULL;
  if(head==NULL)
  {
    head=temp;
  }
  else
  {
    while(p->rlink!=NULL)
      {
        p=p->rlink;
      }
    temp->llink=p;
    p->rlink=temp;
  }
  
}
