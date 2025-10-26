
#include<stdio.h>
#include<stdlib.h>
struct student
{
int id;
struct student *next;
};
struct student *start=NULL;
void printlinkedlist()
{
    printf("Linked list: ");
    struct student *i=start;
    while(i!=NULL)
    {
        printf("%d ",i->id);
        i=i->next;
    }
    printf("\n");
}
void insertbegin()
{
   int value;
   printf("Enter the data part: ");
   scanf("%d",&value);
   struct student *newnode;
   newnode=(struct student*)malloc(sizeof(struct student));
   newnode->id=value;
   newnode->next=NULL;
   newnode->next=start;
   start=newnode;
}
void insertlast()
{
   int value;
   printf("Enter the data part: ");
   scanf("%d",&value);
   struct student *newnode;
   newnode=(struct student*)malloc(sizeof(struct student));
   newnode->id=value;
   newnode->next=NULL;
   if(start==NULL)
    start=newnode;
   else
   {
     struct student *i=start;
   while(i->next!=NULL)
   {
       i=i->next;
   }
   i->next=newnode;
   }

}
void insertany()
{
  int value;
   printf("Enter the data part: ");
   scanf("%d",&value);
  struct student *newnode;
   newnode=(struct student*)malloc(sizeof(struct student));
   newnode->id=value;
   newnode->next=NULL;
   if(start==NULL)
   {
     printf("No node here.\n");
     start=newnode;
   }
   else
   {
    int number;
   printf("After which number you want to insert: ");
   scanf("%d",&number);
    struct student *i=start;
   while(i->id!=number)
   {
       i=i->next;
   }
   newnode->next=i->next;
   i->next=newnode;
   }
}
void deletebegin()
{
    if(start==NULL)
    printf("Underflow\n");
    else if(start->next==NULL)
    start=NULL;
    else
    start=start->next;
}
void deletelast()
{
    if(start==NULL)
    printf("Underflow\n");
    else if(start->next==NULL)
    start=NULL;
    else
    {
        struct student *i=start;
        while(i->next->next!=NULL)
        {
            i=i->next;
        }
        i->next=NULL;
    }
}
void deleteany()
{
    int value;
    printf("Which ID do you want to delete: ");
    scanf("%d",&value);
    if(start==NULL)
    printf("underflow\n");
  else if(start->id==value)
    start=start->next;
   else
    {
        struct student *i=start;
        while(i->next->id!=value)
        {
            i=i->next;
        }
        i->next=i->next->next;
    }
}
int main() {
    printlinkedlist();
    insertbegin();
    insertany();
    insertlast();
    insertlast();
    printlinkedlist();
    deleteany();
    deletebegin();
    deletelast();
    printlinkedlist();
}