//
// Created by ashra on 26/10/2025.
//
#include<Stdio.h>
#include<stdlib.h>
typedef struct student {
    int id;
    struct student *next;
}stu;
stu *start = NULL;

void printLinkedlist() {
printf("Print linked list function called.\nLinked list: ");

    stu *i = start;
    while (i!=NULL) {
        printf("%d  ",i->id);
        i=i->next;
    }
    printf("\n");
}

void insertFirst() {
    printf("Insert begin function called.\n");
    stu *node;
    int value;
    printf("Enter the value: ");
    scanf("%d",&value);

    node = (stu *)malloc(sizeof(stu));
    node->id = value;
    node->next = NULL;

    node->next= start;
    start = node;

    printf("\n");
}

void insertLast() {
    printf("Insert last function called.\n");
    stu *newnode ;
    int value;
    printf("Enter the value: ");
    scanf("%d",&value);

    newnode= (stu *)malloc(sizeof(stu));
    newnode->id = value;
    newnode->next = NULL;
    //Insertion part
    if (start==NULL) {
        start = newnode;
    }
    else {
        stu *i = start;
        while (i->next!=NULL) {
            i=i->next;
        }
        i->next = newnode;
    }

    printf("\n");
}

void insertAny() {
    printf("Insert any function called.\n");
    int value,position;
    printf("Enter the value you insert: ");
    scanf("%d",&value);

    stu *node;
    node = (stu *)malloc(sizeof(stu));

    node->id = value;
    node->next = NULL;

    if (start==NULL) {
        printf("No node here.\n");
        start= node;
    }
    else{
        printf("After which you went to insert: ");
        scanf("%d",&position);
        stu *i = start;
        while (i->id != position) {
            i= i->next;
        }
        node->next =i->next;
        i->next = node;
    }
}
int main() {
    insertFirst();
    insertLast();
    insertFirst();
    printLinkedlist();
}