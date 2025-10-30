//
// Created by ashra on 28/10/2025.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student {
    int id;
    char name[20];
    struct student *next;
}stu;
stu *start =NULL;
int main() {
    stu *s1,*s2;
    s1 = (stu *)malloc(sizeof(stu));
    s2 = (stu *)malloc(sizeof(stu));
    start = s1;
    strcpy(s1->name , "Dihan");
    strcpy(s2->name , "Asif");
    s1->id =2516;
    s2->id =6666;
    s1->next = s2;
    s2->next = NULL;

    stu *i = start;
    while (i!=NULL) {
        printf("Name: %s :: ID: %d",i->name,i->id);
        i=i->next;
        printf("\n");
    }
    printf("\n");

    // ------ Insert at the beginning -------///
    int value;
    char name[40];
    // Scan student name and ID
    printf("Insert begin.\nEnter the student name: ");
    scanf(" %[^\n]",name);
    printf("Enter the ID: ");
    scanf("%d",&value);

    //Create memory for new node
    stu *newnode= (stu *)malloc(sizeof(stu));

    //initialize node data
    newnode->id =value;
    strcpy(newnode->name, name);

    // Adjust pointers to insert node at the beginning
    if (start==NULL) {
        start = newnode;
    }
    else {
        newnode->next = start;
        start = newnode;
    }
    //print the linked list

    printf("\nPrint the linkedlist\n");
    i = start;
    while (i!=NULL) {
        printf("Name: %s :: ID: %d",i->name,i->id);
        i=i->next;
        printf("\n");
    }
    printf("\n");


    // ------ Insert at the Last -------///
    // Scan student name and ID
    printf("Insert last.\nEnter the student name: ");
    scanf(" %[^\n]",name);
    printf("Enter the ID: ");
    scanf("%d",&value);

    //Create memory for new node
    stu *last= (stu *)malloc(sizeof(stu));

    //initialize node data
    last->id =value;
    strcpy(last->name, name);
    last->next = NULL;

    // Adjust pointers to insert node at the beginning
    if (start == NULL) {
        start = last;
    }
    else {
        i = start;
        while (i->next!= NULL) {
            i=i->next;
        }
        i->next = last;
    }
    //print the linked list

    printf("\nPrint the linkedlist\n");
    i = start;
    while (i!=NULL) {
        printf("Name: %s :: ID: %d",i->name,i->id);
        i=i->next;
        printf("\n");
    }
    printf("\n");



    ///------- Incert any ---------///////

    int search;
    printf("Enter the position you went to insert: ");
    scanf("%d",&search);

    i = start;
    while (i!=NULL && i->id != search) {
        i= i->next;
    }
    if (i==NULL) {
        printf("ID not found\n");
    }

    else {

        // Scan student name and ID
        printf("Enter the student name: ");
        scanf(" %[^\n]",name);
        printf("Enter the ID: ");
        scanf("%d",&value);
        stu *node;
        node =(stu *)malloc(sizeof(stu));
        node->id = value;
        strcpy(node->name , name);///****

        node->next = i->next;
        i->next = node;
    }

    i = start;
    while (i!=NULL) {
        printf("Name: %s :: ID: %d",i->name,i->id);
        i=i->next;
        printf("\n");
    }
    printf("\n");

    return 0;
}