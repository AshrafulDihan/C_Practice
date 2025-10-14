#include<stdio.h>
#include<stdlib.h>
struct student {
    int id;
    struct student *next;
};

int main() {
    struct student *s1,*s2,*s3;
    s1=(struct student *)malloc(sizeof(struct student));
    s2=(struct student *)malloc(sizeof(struct student));
    s3=(struct student *)malloc(sizeof(struct student));

    s1->id = 10;
    s2->id=20;
    s3->id = 30;
    s1->next=s2;
    s2->next= s3;
    s3->next= NULL;

    struct student *i = s1;
    while (i!=NULL) {
        printf("%d  ",i->id);
        i = i->next;
    }
}

