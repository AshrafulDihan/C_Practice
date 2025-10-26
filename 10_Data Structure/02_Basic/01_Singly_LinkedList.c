//
// Created by ashra on 25/10/2025.
//
#include<stdio.h>
#include<stdlib.h>

typedef struct student{
  int id;
  struct student *next;
}stu;

int main() {
  stu *s1,*s2,*s3;

  s1 = (stu *)malloc(sizeof(stu));
  s2 = (stu *)malloc(sizeof(stu));
  s3= (stu *)malloc(sizeof(stu));

  stu *start = s1;
  s1->id = 10;
  s2->id = 20;
  s3->id = 30;

  s1->next=s2;
  s2->next= s3;
  s3->next = NULL;

  stu *i =start;
  while (i!=NULL) {
    printf("%d  ",i->id);
    i= i->next;
  }

return 0;

}