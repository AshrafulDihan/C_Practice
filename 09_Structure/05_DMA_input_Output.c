//
// Created by USER on 10/23/2025.
//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student {
    char name[20];
    int id;
    float gpa;
    struct student *next;
}std;

int main() {
    std *s1, *s2, *s3;

    s1 = (std *)malloc(sizeof(std));
    s2 = (std *)malloc(sizeof(std));
    s3 = (std *)malloc(sizeof(std));

    std *start = s1;
    s1->next = s2;
    s2->next = s3;
    s3->next = NULL;

    int n =1;
    std *i = start;
    while (i!=NULL) {
        printf("Enter %d number student details:\n",n);
        printf("Name: ");
        scanf(" %[^\n]",i->name); // " %[^\n]" Here one space This Space fixes the input issue
        //caused by the leftover newline from previous scanf
        printf("ID: ");
        scanf("%d",&i->id);
        printf("GPA: ");
        scanf("%f",&i->gpa);
        n++;
        i= i->next;
    }

    n=1;
    i = start;
    while (i!=NULL) {
        printf("%d number Student details:\n",n);
        printf("Name:%s\nID: %d\nGrad:%.2f\n",i->name,i->id, i->gpa);
        i=i->next;
        n++;
        printf("\n");
    }
    return 0;
}