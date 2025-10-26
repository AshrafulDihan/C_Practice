//
// Created by ashra on 25/10/2025.
//
#include<stdio.h>
#include<stdlib.h>

typedef struct student {
    int id;
    struct student *preb;
    struct student *next;
}stu;
int main() {
    stu *s1,*s2,*s3;

    s1= (stu *)malloc(sizeof(stu));
    s2= (stu *)malloc(sizeof(stu));
    s3= (stu *)malloc(sizeof(stu));

    stu *start = s1;
    s1->id=10;
    s2->id=20;
    s3->id=30;

    s1->preb=NULL;
    s2->preb=s1;
    s3->preb=s2;

    s1->next =s2;
    s2->next =s3;
    s3->next =NULL;

    // Print from end to start (Backward Traversal)
    stu *i = start;
    while (i->next!=NULL) {
        i=i->next;
    }

    stu *temp =i;
    while (temp!=NULL) {
        printf("%d ",temp->id);
        temp=temp->preb;
    }
}