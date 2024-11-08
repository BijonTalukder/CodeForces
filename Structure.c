#include <stdio.h>

struct Student
{
    int roll;
    int age;
    float weight;
};

int main()
{
    struct Student s;
    struct Student s1={1,23,56};
    s.roll = 12;
    s.age = 20;     // Example initialization
    s.weight = 70.5; // Example initialization
    printf("Student Roll Number: %d\n", s.roll);
   
   struct Student* sp;
   printf("%d",sp->roll);
    return 0;
}
