#include <stdio.h>
#include <stdlib.h>

struct linked_list
{
  int data;
  struct node *next;
};
typedef struct linked_list node;
node *head;
*head=NULL;


void insert(node *q,int ele)
{ node *temp;
  if(*q=NULL)
  temp= (node*) malloc(sizeof(node));
  temp->data=ele;
  temp->next=NULL;
  *q=temp;

}

  else
  { temp=*q;
    while(temp->next!=NULL)
    temp=temp->next;

    r=(node*) malloc(sizeof(node));
    r->next=NULL;
    r->data=ele;
    temp->next=r;
  }

void delete(node*q,int num)
{
  node *old,*temp;

  temp=*q;

  while(temp!=NULL)
  {
    if(temp->data=num)
    {
      if(temp==*q) *q=temp->next;

      else old->next=temp->next;

      free(temp);
      return;
    }
    else{
      old=temp;
      temp=temp->next;

    }
  }
}

void printl(node *q)
{
  node *temp;
  temp=*q;
  while(temp->next!=NULL)
  {
    printf("%d",temp->data);
    temp=temp->next;
  }
  printf("%d",temp->data);

}



int main()
{
  int choice,del,ele;

  scanf("1:insert\
        2:delete\
        3:print");

  scanf("%d",&choice);

  while(1)
  {
    switch(choice){
      case 1:{ printf("enter the element");
              scanf("%d",&ele);
              insert(&head,ele);}

      case 2: {scanf("%d",&del);delete(&head,del);}

      case 3: printl(&head);

      default:printf("Invalid");


    }
  }

  return(0);
}
