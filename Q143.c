#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[3];
    int i, topper = 0;

    // Input student details
    for (i = 0; i < 3; i++) {
        printf("Enter Name, Roll and Marks of student %d:\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Find student with highest marks
    for (i = 1; i < 3; i++) {
        if (s[i].marks > s[topper].marks) {
            topper = i;
        }
    }

    // Print topper details
    printf("\nTopper: %s (Marks: %.0f)\n",
           s[topper].name, s[topper].marks);

    return 0;
}