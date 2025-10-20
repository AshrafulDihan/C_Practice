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
    s1.id = 255115516;
    strcpy(s1.name, "Dihan");
    s1.GPA= 3.44;

    printf("Student name is : %s.\nID: %d.\nGPA: %.2f\n",s1.name,s1.id,s1.GPA);
    return 0;
}