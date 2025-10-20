//
// Created by ashra on 18/10/2025.
//
#include<stdio.h>
#include<stdlib.h>

struct student{
    int id;
    struct student *next;
  };
struct student *start = NULL;

void printLinkedlist() {
    printf("PrintLinked list function Called \n");
    printf("Print Linked list: ");

    struct student *i = start;
    while (i!=NULL) {
        printf("%d ",i->id);
    i=i->next;
    }
    printf("\n");
}
void insertBegin() {
    printf("Insert begin function called.\n");
    struct student *newnode;
    int value;
    printf("Enter the data : ");
    scanf("%d",&value);
    newnode = (struct student *)malloc(sizeof(struct student));
    newnode->id = value;
    newnode->next = NULL;

     newnode->next = start;
     start= newnode;
}

void insertLast() {
    printf("Insert last function called.\n");
    struct student *newnode;
    int value;
    printf("Enter the data : ");
    scanf("%d",&value);
    newnode = (struct student *)malloc(sizeof(struct student));
    newnode->id = value;
    newnode->next = NULL;

    if (start == NULL) {
        start = newnode;
    }
    else {
        struct student *i =start;
        while (i->next!=NULL) {
            i=i->next;
        }
        i->next = newnode;
    }
}

void insertAny() {
    printf("Insert Any function called.\n");
    struct student *newnode;
    int value,search;
    printf("Enter the data : ");
    scanf("%d",&value);
    printf("After which you went to insert: ");
    scanf("%d",&search);
    newnode = (struct student *)malloc(sizeof(struct student));
    newnode->id = value;
    newnode->next = NULL;
    if (start == NULL) {
        printf("List is empty. \n");
        start= newnode;
    }
    else {
        struct student *i =start;
        while (i->next!=NULL) {
            i=i->next;
        }
        newnode->next = i->next;
        i->next = newnode;
    }

}

  int main() {
    printLinkedlist();
    insertBegin();
    insertBegin();
   // insertLast();
   // insertLast();
    insertAny();
    printLinkedlist();

    return 0;
}