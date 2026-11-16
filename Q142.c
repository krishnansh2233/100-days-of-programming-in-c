#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    // Input details of 5 students
    for (i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student details
    printf("\n----- Student Details -----\n");
    printf("Name\t\tRoll\tMarks\n");

    for (i = 0; i < 5; i++) {
        printf("%s\t\t%d\t%.2f\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}