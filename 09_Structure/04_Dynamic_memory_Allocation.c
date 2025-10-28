//
// Created by USER on 10/23/2025.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student {
    int id;
    float grad;
    char name[20];
    struct student *next;
}student;

int main() {
    student *s1,*s2,*s3;
    s1 = (student *)malloc(sizeof(student));
    s2 = (student *)malloc(sizeof(student));
    s3 = (student *)malloc(sizeof(student));

    student *start =s1;
    strcpy(s1->name , "Dihan");
    s1->id =25115516;
    s1->grad = 3.44;
    s1->next = s2;

    strcpy(s2->name, "Amit");
    s2->id= 25115517;
    s2->grad = 3.55;
    s2->next=s3;

    strcpy(s3->name, "Asif");
    s3->id = 2617263;
    s3->grad = 3.88;
    s3->next = NULL;

    int n =1;
    student *i = start;
    while (i!= NULL) {
        printf("%d number Person details:\n",n);
        printf("Name:%s\nID: %d.\nGrad:%.2f\n",i->name,i->id, i->grad);
        i=i->next;
        n++;
        printf("\n");
    }

    return 0;
}