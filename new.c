
#include<stdio.h>
#include<stdlib.h>
#
struct student {
    int id;
    struct student *next;

};
struct student *start=NULL;
void printlinkedlist() {
    printf("Linked List: ");
    struct student *i= start;
    while (i!=NULL) {
        printf("%d ",i->id);
        i=i-> next;
    }
    printf("\n");
}

void createnode() {
    struct student *newnode;
    int value;
    printf("Enater the data : ");
    scanf("%d",&value );
    newnode=(struct student *)malloc(sizeof(struct student));

    newnode->id = value;
    newnode->next = NULL;

    if (start == NULL) {
        start = newnode;

    }

    else {
        struct student *i=start;
        while (i->next!=NULL) {
            i=i->next;
        }
        i->next = newnode;
    }
}

int main() {
    printlinkedlist();
    createnode();
    printlinkedlist();
    createnode();
    printlinkedlist();
    createnode();
    printlinkedlist();
    createnode();
    printlinkedlist();
    return 0;
}