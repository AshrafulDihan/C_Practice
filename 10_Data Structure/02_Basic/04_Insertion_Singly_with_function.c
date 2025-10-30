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

    printLinkedlist();
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
    printLinkedlist();
}

void insertAny() {
    int search,value;
    // Scan student ID
    printf("Enter the ID: ");
    scanf("%d",&value);
    // Create a new node and assign ID
    stu *node;
    node =(stu *)malloc(sizeof(stu));
    node->id = value;
    node->next = NULL;

    // If the list is empty, insert this node as the first node
    if (start == NULL) {
        start= node;
    }
    else {
        // If the list is not empty, ask after which ID to insert
        printf("Enter the position you went to insert: ");
        scanf("%d",&search);

        stu *i = start;
        while (i!=NULL && i->id != search) {
            i= i->next;
        }
        // If the ID is not found, inform the user
        if (i==NULL) {
            printf("ID not found\n");
        }

        else {
            // Insert the new node after the found node
            node->next = i->next;
            i->next = node;
        }
        printf("\n");
    }
    printLinkedlist();
}
int main() {
    stu *s1, *s2;
    s1 =(stu *)malloc(sizeof(stu));
    s2 =(stu *)malloc(sizeof(stu));
    start = s1;
    s1->id = 100;
    s2->id = 200;
    s1->next = s2;
    s2->next = NULL;

    printLinkedlist();
    insertFirst();
    insertLast();
    insertFirst();
    insertAny();
    printLinkedlist();
}