#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// creating a structure for student
struct Student {
    int rollNo;
    char name[30];
    double percentage;
    int age;
};


int main () {
    
    // new student
    struct  Student student1;

    // value initialization for student1
    student1.age = 15;
    student1.rollNo = 1;
    student1.percentage = 85.5;
    // assign name to student1 using string copy method
    strcpy(student1.name, "Abhishek");
    
    printf("Name of student1 is : %s\n", student1.name);
    printf("Roll No. of student1 is : %d\n", student1.rollNo);
    printf("Age of student1 is : %d\n", student1.age);
    printf("Percentage of student1 is : %lf\n", student1.percentage);

    // new student with values
    struct Student student2 = {2,"Amit Kumar", 65.56, 14};

    printf("Name of student2 is : %s\n", student2.name);
    printf("Roll No. of student2 is : %d\n", student2.rollNo);
    printf("Age of student2 is : %d\n", student2.age);
    printf("Percentage of student2 is : %lf\n", student2.percentage);

    return 0;
}