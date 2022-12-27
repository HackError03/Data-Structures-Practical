#include <stdio.h>
#include <string.h>

/* Define a structure to store information about a student */
struct student {
    char name[50];
    int age;
    float grade;
};

/* Function to print information about a student */
void print_student(struct student s) {
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Grade: %.2f\n", s.grade);
}

int main() {
    /* Declare and initialize a student structure */
    struct student s1 = { "John Smith", 20, 87.5 };
    /* Print information about the student */
    print_student(s1);
    return 0;
}
