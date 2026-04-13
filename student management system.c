#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int m1, m2, m3;
    int total;
    float average;
    char grade;
};

int main() {
    struct Student s;
    
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter marks of 3 subjects:\n");
    scanf("%d %d %d", &s.m1, &s.m2, &s.m3);

    s.total = s.m1 + s.m2 + s.m3;
    s.average = s.total / 3.0;

    if (s.average >= 90)
        s.grade = 'A';
    else if (s.average >= 75)
        s.grade = 'B';
    else if (s.average >= 60)
        s.grade = 'C';
    else if (s.average >= 50)
        s.grade = 'D';
    else
        s.grade = 'F';

    printf("\n--- Student Result ---\n");
    printf("Roll No   : %d\n", s.roll);
    printf("Name      : %s\n", s.name);
    printf("Total     : %d\n", s.total);
    printf("Average   : %.2f\n", s.average);
    printf("Grade     : %c\n", s.grade);

    return 0;
}
