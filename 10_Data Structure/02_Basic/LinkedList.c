//Linked list insertion and  deletion//
#include<stdio.h>
#include<stdlib.h>
struct student
{
    int id;
    struct student *next;
};
struct student *start=NULL;

void printlinklist()
{
    printf("--print function called--\n");
    printf("Print the linklist ");
  struct student*temp=start;
   while(temp!=NULL)
    {
        printf("%d ",temp->id);
        temp=temp->next;
    }
    printf("\n");
}
void insertbegin()
{
   struct student *newnode;
   printf("--Insert begin function called--\n");
    int value;
    printf("Enter the data part:");
    scanf("%d",&value);
    newnode=(struct student*)malloc(sizeof(struct student));
    newnode->id=value;
    newnode->next=NULL;

    newnode->next=start;
    start=newnode;
}
void insertlast()
{
   struct student *newnode;
   printf("--Insert last function called--\n");
    int value;
    printf("Enter the data part:");
    scanf("%d",&value);
    newnode=(struct student*)malloc(sizeof(struct student));
    newnode->id=value;
    newnode->next=NULL;

    if(start==NULL)
    {
        start=newnode;
        //return;
    }
    else
    {
    struct student *temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    }
}
void insertany()
{
    struct student *newnode;
    printf("--Insert any function called--\n");
     int value;
    printf("Enter the data part:");
    scanf("%d",&value);

     int search;
    printf("After which you want to insert:");
    scanf("%d",&search);

    newnode=(struct student*)malloc(sizeof(struct student));
    newnode->id=value;
    newnode->next=NULL;
     if(start==NULL)
    {
        printf("Initially no node.So insert at begin\n");
        start=newnode;
        //return;
    }
    else
    {
    struct student *temp=start;
    while(temp->id!=search)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    }
}
/*void deletebegin()
{
    printf("--Delete begin function called--\n");
    if(start==NULL)
    {
        printf("Underflow! No node to delete.\n");
    }
    else if(start->next==NULL)
    {
        start=NULL;

    }
    else
    {
        start=start->next;

    }
}

void deletelast()
{
    printf("--Delete last function called--\n");
    if(start==NULL)
    {
        printf("Underflow! No node to delete.\n");
    }
    else if(start->next==NULL)
    {
        start=NULL;

    }
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
    printf("--Delete any function called--\n");

    int search;
    printf("Enter the value (id) of node you want to delete: ");
    scanf("%d",&search);

    if(start==NULL)
    {
        printf("Underflow! No node to delete.\n");
    }
    else if(start->id==search)
    {
        start=start->next;

    }
    else
    {
        struct student *i=start;
        while(i->next!=NULL && i->next->id!=search)
        {
            i=i->next;
        }

        if(i->next==NULL)
        {
            printf("Node with value %d not found.\n", search);
        }
        else
        {
            i->next=i->next->next;

        }
    }
}*/

int main()
{
   insertlast();
    printf("\n");

   insertbegin();
    printf("\n");

   insertlast();
    printf("\n");

   insertany();
    printf("\n");

    insertany();
    printf("\n");

   printlinklist();
   printf("\n\n\n");

   /*deletebegin();
       printlinklist();
    printf("\n");

   deletelast();
    printlinklist();
    printf("\n");

   deleteany();
   printlinklist();
    printf("\n\n");*/

    return 0;
}

