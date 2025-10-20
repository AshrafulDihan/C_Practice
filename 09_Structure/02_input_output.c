//
// Created by ashra on 17/10/2025.
//
#include<stdio.h>
#include<string.h>
struct student {
    int id;
    char name[40];
    float GPA;
};
int main() {
    struct student s1;
    printf("Enter name: ");
    scanf("%[^\n]",s1.name);
    printf("Enter ID: ");
    scanf("%d",&s1.id);
    printf("Enter GPA: ");
    scanf("%.2f",&s1.GPA);

    printf("Student name is : %s.\nID: %d.\nGPA: %.2f\n",s1.name,s1.id,s1.GPA);
    return 0;
  }