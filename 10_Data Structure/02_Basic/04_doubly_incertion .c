//
// Created by ashra on 26/10/2025.
//

#include<stdio.h>
#include<stdlib.h>
typedef struct student {
    int id;
    struct student *next;
    struct student *pre;
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
    node->pre = NULL;

    node->next= start;
    if(start!=NULL){
      start->pre= node;
      }
    start = node;

    printf("\n");
}

void insertLast() {
    printf("Insert last function called.\n");
    stu *node;
    int value;
    printf("Enter the value: ");
    scanf("%d",&value);

    node = (stu *)malloc(sizeof(stu));
    node->id = value;
    node->next = NULL;
    node->pre = NULL;

    if (start == NULL) {
        start = node;
    }
    else {
        stu *i= start;
        while (i->next!=NULL) {
            i= i->next;
        }
        i->next = node;
        node->pre = i;
    }
}

void insertAny() {
    printf("Insert any function called.\n");
    stu *node;
    int value;
    printf("Enter the value: ");
    scanf("%d",&value);

    node = (stu *)malloc(sizeof(stu));
    node->id = value;
    node->next = NULL;
    node->pre = NULL;

    if (start == NULL) {
        start = node;
        return;
    }
    int search;
    printf("After which you went to incert: ");
    scanf("%d",&search);

    stu *i = start;
    while (i!=NULL && i->id!=search) {
        i=i->next;
    }
    if (i==NULL) {
        printf("ID not found!!\n");
        return;
    }

    node->next=i->next;
    node->pre =i;

    if (i->next!= NULL) {
        i->next->pre = node;
    }
    i->next = node;

}



int main(){}
